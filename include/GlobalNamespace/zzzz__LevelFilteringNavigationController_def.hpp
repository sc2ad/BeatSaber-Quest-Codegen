#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class ViewController;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LevelFilteringNavigationController____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54;
}
// Type: ::<>c__DisplayClass53_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5756))
// CS Name: LevelFilteringNavigationController::<>c__DisplayClass53_0
class CORDL_TYPE ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0(____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0(____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0& operator=(____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0& operator=(____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_levelPack, put=__set_levelPack))  levelPack;

constexpr void __set_levelPack(::GlobalNamespace::IBeatmapLevelPack value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack __get_levelPack() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0() ;

/// @brief Method .ctor addr 0x2169124 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__1 addr 0x21692c4 size 0xb4 virtual false final false
 bool _SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5757))
// CS Name: LevelFilteringNavigationController::<>c
class CORDL_TYPE ____GlobalNamespace__LevelFilteringNavigationController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__LevelFilteringNavigationController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelFilteringNavigationController____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LevelFilteringNavigationController____c(____GlobalNamespace__LevelFilteringNavigationController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelFilteringNavigationController____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LevelFilteringNavigationController____c(____GlobalNamespace__LevelFilteringNavigationController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelFilteringNavigationController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c& operator=(____GlobalNamespace__LevelFilteringNavigationController____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__LevelFilteringNavigationController____c& operator=(____GlobalNamespace__LevelFilteringNavigationController____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c value) ;

static ::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack,::StringW> __declspec(property(get=__get___9__53_0, put=__set___9__53_0))  __9__53_0;

static void __set___9__53_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack,::StringW> __get___9__53_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LevelFilteringNavigationController____c() ;

/// @brief Method .ctor addr 0x21693dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__53_0 addr 0x21693e4 size 0x9c virtual false final false
 ::StringW _SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::IBeatmapLevelPack pack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateCustomSongs>d__54
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5758))
// CS Name: LevelFilteringNavigationController::<UpdateCustomSongs>d__54
struct CORDL_TYPE ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelFilteringNavigationController", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelFilteringNavigationController __4__this, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection> __u__1) noexcept;


                    constexpr ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54(____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54 const&) = default;
                    constexpr ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54(____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54&&) = default;
                    constexpr ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54& operator=(____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54& operator=(____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::GlobalNamespace::LevelFilteringNavigationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LevelFilteringNavigationController value) ;

constexpr ::GlobalNamespace::LevelFilteringNavigationController __get___4__this() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2169480 size 0x4ec virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216996c size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelFilteringNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5759))
// CS Name: LevelFilteringNavigationController
class CORDL_TYPE LevelFilteringNavigationController : public ::HMUI::NavigationController {
public:
// Declarations
using _UpdateCustomSongs_d__54 = ::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54;

using __c = ::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c;

using __c__DisplayClass53_0 = ::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~LevelFilteringNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: " const&", def_value: None }]
constexpr LevelFilteringNavigationController(LevelFilteringNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: "&&", def_value: None }]
constexpr LevelFilteringNavigationController(LevelFilteringNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelFilteringNavigationController(void* ptr) noexcept : ::HMUI::NavigationController(ptr) {
}


  constexpr LevelFilteringNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelFilteringNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelFilteringNavigationController& operator=(LevelFilteringNavigationController&& o) noexcept = default;
  constexpr LevelFilteringNavigationController& operator=(LevelFilteringNavigationController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__emptyFavoritesListInfoPrefab, put=__set__emptyFavoritesListInfoPrefab))  _emptyFavoritesListInfoPrefab;

constexpr void __set__emptyFavoritesListInfoPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__emptyFavoritesListInfoPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__emptyCustomSongListInfoPrefab, put=__set__emptyCustomSongListInfoPrefab))  _emptyCustomSongListInfoPrefab;

constexpr void __set__emptyCustomSongListInfoPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__emptyCustomSongListInfoPrefab() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::SelectLevelCategoryViewController __declspec(property(get=__get__selectLevelCategoryViewController, put=__set__selectLevelCategoryViewController))  _selectLevelCategoryViewController;

constexpr void __set__selectLevelCategoryViewController(::GlobalNamespace::SelectLevelCategoryViewController value) ;

constexpr ::GlobalNamespace::SelectLevelCategoryViewController __get__selectLevelCategoryViewController() const;

 ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController __declspec(property(get=__get__annotatedBeatmapLevelCollectionsViewController, put=__set__annotatedBeatmapLevelCollectionsViewController))  _annotatedBeatmapLevelCollectionsViewController;

constexpr void __set__annotatedBeatmapLevelCollectionsViewController(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController value) ;

constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController __get__annotatedBeatmapLevelCollectionsViewController() const;

 ::GlobalNamespace::LevelSearchViewController __declspec(property(get=__get__levelSearchViewController, put=__set__levelSearchViewController))  _levelSearchViewController;

constexpr void __set__levelSearchViewController(::GlobalNamespace::LevelSearchViewController value) ;

constexpr ::GlobalNamespace::LevelSearchViewController __get__levelSearchViewController() const;

 ::GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 ::System::Action_4<::GlobalNamespace::LevelFilteringNavigationController,::GlobalNamespace::IAnnotatedBeatmapLevelCollection,::UnityEngine::GameObject,::GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectAnnotatedBeatmapLevelCollectionEvent, put=__set_didSelectAnnotatedBeatmapLevelCollectionEvent))  didSelectAnnotatedBeatmapLevelCollectionEvent;

constexpr void __set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_4<::GlobalNamespace::LevelFilteringNavigationController,::GlobalNamespace::IAnnotatedBeatmapLevelCollection,::UnityEngine::GameObject,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::System::Action_4<::GlobalNamespace::LevelFilteringNavigationController,::GlobalNamespace::IAnnotatedBeatmapLevelCollection,::UnityEngine::GameObject,::GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

 ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> __declspec(property(get=__get_didStartLoadingEvent, put=__set_didStartLoadingEvent))  didStartLoadingEvent;

constexpr void __set_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> __get_didStartLoadingEvent() const;

 ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> __declspec(property(get=__get_didPressAllSongsEvent, put=__set_didPressAllSongsEvent))  didPressAllSongsEvent;

constexpr void __set_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> __get_didPressAllSongsEvent() const;

 ::System::Action __declspec(property(get=__get_didOpenBeatmapLevelCollectionsEvent, put=__set_didOpenBeatmapLevelCollectionsEvent))  didOpenBeatmapLevelCollectionsEvent;

constexpr void __set_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

constexpr ::System::Action __get_didOpenBeatmapLevelCollectionsEvent() const;

 ::System::Action __declspec(property(get=__get_didCloseBeatmapLevelCollectionsEvent, put=__set_didCloseBeatmapLevelCollectionsEvent))  didCloseBeatmapLevelCollectionsEvent;

constexpr void __set_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

constexpr ::System::Action __get_didCloseBeatmapLevelCollectionsEvent() const;

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__currentNoDataInfoPrefab, put=__set__currentNoDataInfoPrefab))  _currentNoDataInfoPrefab;

constexpr void __set__currentNoDataInfoPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__currentNoDataInfoPrefab() const;

 ::StringW __declspec(property(get=__get__levelPackIdToBeSelectedAfterPresent, put=__set__levelPackIdToBeSelectedAfterPresent))  _levelPackIdToBeSelectedAfterPresent;

constexpr void __set__levelPackIdToBeSelectedAfterPresent(::StringW value) ;

constexpr ::StringW __get__levelPackIdToBeSelectedAfterPresent() const;

 bool __declspec(property(get=__get__hidePacksIfOneOrNone, put=__set__hidePacksIfOneOrNone))  _hidePacksIfOneOrNone;

constexpr void __set__hidePacksIfOneOrNone(bool value) ;

constexpr bool __get__hidePacksIfOneOrNone() const;

 bool __declspec(property(get=__get__enableCustomLevels, put=__set__enableCustomLevels))  _enableCustomLevels;

constexpr void __set__enableCustomLevels(bool value) ;

constexpr bool __get__enableCustomLevels() const;

 ::GlobalNamespace::SongPackMask __declspec(property(get=__get__songPackMask, put=__set__songPackMask))  _songPackMask;

constexpr void __set__songPackMask(::GlobalNamespace::SongPackMask value) ;

constexpr ::GlobalNamespace::SongPackMask __get__songPackMask() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __declspec(property(get=__get__enabledLevelCategories, put=__set__enabledLevelCategories))  _enabledLevelCategories;

constexpr void __set__enabledLevelCategories(::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __get__enabledLevelCategories() const;

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__ostBeatmapLevelPacks, put=__set__ostBeatmapLevelPacks))  _ostBeatmapLevelPacks;

constexpr void __set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __get__ostBeatmapLevelPacks() const;

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__musicPacksBeatmapLevelPacks, put=__set__musicPacksBeatmapLevelPacks))  _musicPacksBeatmapLevelPacks;

constexpr void __set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __get__musicPacksBeatmapLevelPacks() const;

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__customLevelPacks, put=__set__customLevelPacks))  _customLevelPacks;

constexpr void __set__customLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __get__customLevelPacks() const;

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__allOfficialBeatmapLevelPacks, put=__set__allOfficialBeatmapLevelPacks))  _allOfficialBeatmapLevelPacks;

constexpr void __set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __get__allOfficialBeatmapLevelPacks() const;

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__allBeatmapLevelPacks, put=__set__allBeatmapLevelPacks))  _allBeatmapLevelPacks;

constexpr void __set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __get__allBeatmapLevelPacks() const;


// Properties

 ::GlobalNamespace::IBeatmapLevelPack __declspec(property(get=get_selectedBeatmapLevelPack))  selectedBeatmapLevelPack;

 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=get_selectedLevelCategory))  selectedLevelCategory;


// Methods

/// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x2166d1c size 0xb0 virtual false final false
 void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_4<::GlobalNamespace::LevelFilteringNavigationController,::GlobalNamespace::IAnnotatedBeatmapLevelCollection,::UnityEngine::GameObject,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x2166dcc size 0xb0 virtual false final false
 void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_4<::GlobalNamespace::LevelFilteringNavigationController,::GlobalNamespace::IAnnotatedBeatmapLevelCollection,::UnityEngine::GameObject,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method add_didStartLoadingEvent addr 0x2166e7c size 0xb0 virtual false final false
 void add_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

/// @brief Method remove_didStartLoadingEvent addr 0x2166f2c size 0xb0 virtual false final false
 void remove_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

/// @brief Method add_didPressAllSongsEvent addr 0x2166fdc size 0xb0 virtual false final false
 void add_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

/// @brief Method remove_didPressAllSongsEvent addr 0x216708c size 0xb0 virtual false final false
 void remove_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController> value) ;

/// @brief Method add_didOpenBeatmapLevelCollectionsEvent addr 0x216713c size 0x9c virtual false final false
 void add_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method remove_didOpenBeatmapLevelCollectionsEvent addr 0x21671d8 size 0x9c virtual false final false
 void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method add_didCloseBeatmapLevelCollectionsEvent addr 0x2167274 size 0x9c virtual false final false
 void add_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method remove_didCloseBeatmapLevelCollectionsEvent addr 0x2167310 size 0x9c virtual false final false
 void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method get_selectedBeatmapLevelPack addr 0x21673ac size 0x54 virtual false final false
 ::GlobalNamespace::IBeatmapLevelPack get_selectedBeatmapLevelPack() ;

/// @brief Method get_selectedLevelCategory addr 0x2167400 size 0x18 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory() ;

/// @brief Method Setup addr 0x2167470 size 0x154 virtual false final false
 void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::IBeatmapLevelPack levelPackToBeSelectedAfterPresent, ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels) ;

/// @brief Method SetupBeatmapLevelPacks addr 0x21675c4 size 0x458 virtual false final false
 void SetupBeatmapLevelPacks() ;

/// @brief Method DidActivate addr 0x2167d40 size 0x3dc virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method LevelSearchViewControllerDidStartLoading addr 0x21684ac size 0x20 virtual false final false
 void LevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController obj) ;

/// @brief Method DidDeactivate addr 0x21684cc size 0x33c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method LevelSearchViewControllerDidFilterBeatmapLevelCollection addr 0x2168a18 size 0x30 virtual false final false
 void LevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, ::GlobalNamespace::BeatmapCharacteristicSO preferredBeatmapCharacteristic) ;

/// @brief Method SelectLevelCategoryViewControllerDidSelectLevelCategory addr 0x2168a48 size 0x8 virtual false final false
 void SelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController viewController, ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory) ;

/// @brief Method UpdateSecondChildControllerContent addr 0x216832c size 0x180 virtual false final false
 void UpdateSecondChildControllerContent(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory) ;

/// @brief Method ShowPacksInSecondChildController addr 0x2168a50 size 0x220 virtual false final false
 void ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks) ;

/// @brief Method ReplaceSecondViewController addr 0x2168c90 size 0xa0 virtual false final false
 void ReplaceSecondViewController(::HMUI::ViewController viewController) ;

/// @brief Method HandlePlayerDataFavoriteLevelsSetDidChange addr 0x2168dc0 size 0x44 virtual false final false
 void HandlePlayerDataFavoriteLevelsSetDidChange() ;

/// @brief Method HandleIncreaseNumberOfGameplays addr 0x2168e04 size 0x38 virtual false final false
 void HandleIncreaseNumberOfGameplays() ;

/// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections addr 0x2168e64 size 0x1c virtual false final false
 void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections() ;

/// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections addr 0x2168e80 size 0x1c virtual false final false
 void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections() ;

/// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection addr 0x2168e9c size 0x30 virtual false final false
 void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection) ;

/// @brief Method SelectAnnotatedBeatmapLevelCollection addr 0x2168ecc size 0x258 virtual false final false
 void SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IBeatmapLevelPack levelPack) ;

/// @brief Method UpdateCustomSongs addr 0x2168d30 size 0x90 virtual false final false
 void UpdateCustomSongs() ;

// Ctor Parameters []
explicit LevelFilteringNavigationController() ;

/// @brief Method .ctor addr 0x216912c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetupBeatmapLevelPacks>b__39_0 addr 0x2169134 size 0xc8 virtual false final false
 bool _SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::IBeatmapLevelPack pack) ;

/// @brief Method <SetupBeatmapLevelPacks>b__39_1 addr 0x21691fc size 0xc8 virtual false final false
 bool _SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::IBeatmapLevelPack pack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController, "", "LevelFilteringNavigationController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c, "", "LevelFilteringNavigationController/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0, "", "LevelFilteringNavigationController/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54, "", "LevelFilteringNavigationController/<UpdateCustomSongs>d__54");
