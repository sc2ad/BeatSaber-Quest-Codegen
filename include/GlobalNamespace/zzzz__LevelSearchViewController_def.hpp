#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class InputFieldView;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
class GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30;
}
// Type: ::BeatmapLevelPackCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5765))
// CS Name: LevelSearchViewController::BeatmapLevelPackCollection
class CORDL_TYPE GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection(GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection(GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection& operator=(GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection&& o) noexcept = default;
  constexpr GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection& operator=(GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=__get__beatmapLevelCollection_k__BackingField, put=__set__beatmapLevelCollection_k__BackingField))  _beatmapLevelCollection_k__BackingField;

constexpr void __set__beatmapLevelCollection_k__BackingField(GlobalNamespace::IBeatmapLevelCollection value) ;

constexpr GlobalNamespace::IBeatmapLevelCollection __get__beatmapLevelCollection_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection, put=set_beatmapLevelCollection))  beatmapLevelCollection;


// Methods

/// @brief Method get_collectionName addr 0x216b6a4 size 0x8 virtual true final true
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x216b6ac size 0x8 virtual true final true
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x216b6b4 size 0x8 virtual true final true
 UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x216b6bc size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

/// @brief Method set_beatmapLevelCollection addr 0x216b6c4 size 0x8 virtual false final false
 void set_beatmapLevelCollection(GlobalNamespace::IBeatmapLevelCollection value) ;

// Ctor Parameters [CppParam { name: "beatmapLevelCollection", ty: "GlobalNamespace::IBeatmapLevelCollection", modifiers: "", def_value: None }]
explicit GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection(GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection) ;

/// @brief Method .ctor addr 0x216b6cc size 0x28 virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateBeatmapLevelPackCollectionAsync>d__30
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5766))
// CS Name: LevelSearchViewController::<UpdateBeatmapLevelPackCollectionAsync>d__30
struct CORDL_TYPE GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelSearchViewController", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelSearchViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30(GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30 const&) = default;
                    constexpr GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30(GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30&&) = default;
                    constexpr GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30& operator=(GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30& operator=(GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelSearchViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelSearchViewController value) ;

constexpr GlobalNamespace::LevelSearchViewController __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216b6f4 size 0x548 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216bc3c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelSearchViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5767))
// CS Name: LevelSearchViewController
class CORDL_TYPE LevelSearchViewController : public HMUI::ViewController {
public:
// Declarations
using _UpdateBeatmapLevelPackCollectionAsync_d__30 = GlobalNamespace::GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30;

using BeatmapLevelPackCollection = GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~LevelSearchViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: " const&", def_value: None }]
constexpr LevelSearchViewController(LevelSearchViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: "&&", def_value: None }]
constexpr LevelSearchViewController(LevelSearchViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelSearchViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr LevelSearchViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelSearchViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelSearchViewController& operator=(LevelSearchViewController&& o) noexcept = default;
  constexpr LevelSearchViewController& operator=(LevelSearchViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__searchButton, put=__set__searchButton))  _searchButton;

constexpr void __set__searchButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__searchButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__clearFiltersButton, put=__set__clearFiltersButton))  _clearFiltersButton;

constexpr void __set__clearFiltersButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__clearFiltersButton() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__filterParamsText, put=__set__filterParamsText))  _filterParamsText;

constexpr void __set__filterParamsText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__filterParamsText() const;

 UnityEngine::GameObject __declspec(property(get=__get__filterPlaceholder, put=__set__filterPlaceholder))  _filterPlaceholder;

constexpr void __set__filterPlaceholder(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__filterPlaceholder() const;

 HMUI::InputFieldView __declspec(property(get=__get__searchTextInputFieldView, put=__set__searchTextInputFieldView))  _searchTextInputFieldView;

constexpr void __set__searchTextInputFieldView(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__searchTextInputFieldView() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::SongPackMasksModel __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel))  _songPackMasksModel;

constexpr void __set__songPackMasksModel(GlobalNamespace::SongPackMasksModel value) ;

constexpr GlobalNamespace::SongPackMasksModel __get__songPackMasksModel() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 System::Action_2<GlobalNamespace::LevelSearchViewController,GlobalNamespace::LevelFilterParams> __declspec(property(get=__get_didPressSearchButtonEvent, put=__set_didPressSearchButtonEvent))  didPressSearchButtonEvent;

constexpr void __set_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController,GlobalNamespace::LevelFilterParams> value) ;

constexpr System::Action_2<GlobalNamespace::LevelSearchViewController,GlobalNamespace::LevelFilterParams> __get_didPressSearchButtonEvent() const;

 System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didFilterBeatmapLevelCollectionEvent, put=__set_didFilterBeatmapLevelCollectionEvent))  didFilterBeatmapLevelCollectionEvent;

constexpr void __set_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::BeatmapCharacteristicSO> __get_didFilterBeatmapLevelCollectionEvent() const;

 System::Action_1<GlobalNamespace::LevelSearchViewController> __declspec(property(get=__get_didStartLoadingEvent, put=__set_didStartLoadingEvent))  didStartLoadingEvent;

constexpr void __set_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController> value) ;

constexpr System::Action_1<GlobalNamespace::LevelSearchViewController> __get_didStartLoadingEvent() const;

 GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection __declspec(property(get=__get__beatmapLevelPackCollection, put=__set__beatmapLevelPackCollection))  _beatmapLevelPackCollection;

constexpr void __set__beatmapLevelPackCollection(GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection value) ;

constexpr GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection __get__beatmapLevelPackCollection() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__preferredBeatmapCharacteristic, put=__set__preferredBeatmapCharacteristic))  _preferredBeatmapCharacteristic;

constexpr void __set__preferredBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__preferredBeatmapCharacteristic() const;

 GlobalNamespace::LevelFilterParams __declspec(property(get=__get__currentFilterParams, put=__set__currentFilterParams))  _currentFilterParams;

constexpr void __set__currentFilterParams(GlobalNamespace::LevelFilterParams value) ;

constexpr GlobalNamespace::LevelFilterParams __get__currentFilterParams() const;

 bool __declspec(property(get=__get__onlyFavorites, put=__set__onlyFavorites))  _onlyFavorites;

constexpr void __set__onlyFavorites(bool value) ;

constexpr bool __get__onlyFavorites() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks))  _beatmapLevelPacks;

constexpr void __set__beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get__beatmapLevelPacks() const;


// Methods

/// @brief Method add_didPressSearchButtonEvent addr 0x216aab4 size 0xb0 virtual false final false
 void add_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController,GlobalNamespace::LevelFilterParams> value) ;

/// @brief Method remove_didPressSearchButtonEvent addr 0x216ab64 size 0xb0 virtual false final false
 void remove_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController,GlobalNamespace::LevelFilterParams> value) ;

/// @brief Method add_didFilterBeatmapLevelCollectionEvent addr 0x21681cc size 0xb0 virtual false final false
 void add_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didFilterBeatmapLevelCollectionEvent addr 0x21688b8 size 0xb0 virtual false final false
 void remove_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method add_didStartLoadingEvent addr 0x216827c size 0xb0 virtual false final false
 void add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController> value) ;

/// @brief Method remove_didStartLoadingEvent addr 0x2168968 size 0xb0 virtual false final false
 void remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController> value) ;

/// @brief Method Setup addr 0x2167d34 size 0xc virtual false final false
 void Setup(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks) ;

/// @brief Method ResetFilterParams addr 0x2168c70 size 0x20 virtual false final false
 void ResetFilterParams(bool onlyFavorites) ;

/// @brief Method UpdateSearchLevelFilterParams addr 0x216ae04 size 0x8 virtual false final false
 void UpdateSearchLevelFilterParams(GlobalNamespace::LevelFilterParams levelFilterParams) ;

/// @brief Method DidActivate addr 0x216ae10 size 0x1c4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x216afd4 size 0xc4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method ResetCurrentFilterParams addr 0x216ac14 size 0x118 virtual false final false
 void ResetCurrentFilterParams() ;

/// @brief Method UpdateBeatmapLevelPackCollectionAsync addr 0x216ad70 size 0x94 virtual false final false
 void UpdateBeatmapLevelPackCollectionAsync() ;

/// @brief Method SearchTextInputFieldViewOnValueChanged addr 0x216b098 size 0x24 virtual false final false
 void SearchTextInputFieldViewOnValueChanged(HMUI::InputFieldView inputFieldView) ;

/// @brief Method UpdateCurrentFilterParams addr 0x216ad2c size 0x44 virtual false final false
 void UpdateCurrentFilterParams() ;

/// @brief Method RefreshAfterIncreaseNumberOfGameplay addr 0x2168e3c size 0x28 virtual false final false
 void RefreshAfterIncreaseNumberOfGameplay() ;

/// @brief Method Refresh addr 0x216ae0c size 0x4 virtual false final false
 void Refresh() ;

/// @brief Method LocalizedLevelFilterParamsDescription addr 0x216b0bc size 0x5a4 virtual false final false
 ::StringW LocalizedLevelFilterParamsDescription(GlobalNamespace::LevelFilterParams levelFilterParams) ;

// Ctor Parameters []
explicit LevelSearchViewController() ;

/// @brief Method .ctor addr 0x216b660 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__27_0 addr 0x216b668 size 0x24 virtual false final false
 void _DidActivate_b__27_0() ;

/// @brief Method <DidActivate>b__27_1 addr 0x216b68c size 0x18 virtual false final false
 void _DidActivate_b__27_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelSearchViewController__BeatmapLevelPackCollection, "", "LevelSearchViewController/BeatmapLevelPackCollection");
NEED_NO_BOX(GlobalNamespace::LevelSearchViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController, "", "LevelSearchViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__30, "", "LevelSearchViewController/<UpdateBeatmapLevelPackCollectionAsync>d__30");
