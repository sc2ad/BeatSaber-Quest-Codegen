#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;
}
// Type: ::<UpdateNotOwnedPacksAsync>d__17
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4192))
// CS Name: DlcPromoPanelModel::<UpdateNotOwnedPacksAsync>d__17
struct CORDL_TYPE GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::DlcPromoPanelModel", modifiers: "", def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_packData_5__5", ty: "GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::DlcPromoPanelModel __4__this, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> _newNotOwnedMusicPackPromoInfos_5__2, ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __7__wrap2, int32_t __7__wrap3, GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo _packData_5__5, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17 const&) = default;
                    constexpr GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17&&) = default;
                    constexpr GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17& operator=(GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17& operator=(GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::DlcPromoPanelModel value) ;

constexpr GlobalNamespace::DlcPromoPanelModel __get___4__this() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __declspec(property(get=__get__newNotOwnedMusicPackPromoInfos_5__2, put=__set__newNotOwnedMusicPackPromoInfos_5__2))  _newNotOwnedMusicPackPromoInfos_5__2;

constexpr void __set__newNotOwnedMusicPackPromoInfos_5__2(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __get__newNotOwnedMusicPackPromoInfos_5__2() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;

 GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo __declspec(property(get=__get__packData_5__5, put=__set__packData_5__5))  _packData_5__5;

constexpr void __set__packData_5__5(GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo __get__packData_5__5() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21be878 size 0x46c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21bece4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DlcPromoPanelModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4193))
// CS Name: DlcPromoPanelModel
class CORDL_TYPE DlcPromoPanelModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _UpdateNotOwnedPacksAsync_d__17 = GlobalNamespace::GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DlcPromoPanelModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: " const&", def_value: None }]
constexpr DlcPromoPanelModel(DlcPromoPanelModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
constexpr DlcPromoPanelModel(DlcPromoPanelModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DlcPromoPanelModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DlcPromoPanelModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DlcPromoPanelModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DlcPromoPanelModel& operator=(DlcPromoPanelModel&& o) noexcept = default;
  constexpr DlcPromoPanelModel& operator=(DlcPromoPanelModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::DlcPromoPanelDataSO __declspec(property(get=__get__dlcPromoPanelData, put=__set__dlcPromoPanelData))  _dlcPromoPanelData;

constexpr void __set__dlcPromoPanelData(GlobalNamespace::DlcPromoPanelDataSO value) ;

constexpr GlobalNamespace::DlcPromoPanelDataSO __get__dlcPromoPanelData() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __declspec(property(get=__get__notOwnedMusicPackPromoInfos, put=__set__notOwnedMusicPackPromoInfos))  _notOwnedMusicPackPromoInfos;

constexpr void __set__notOwnedMusicPackPromoInfos(::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __get__notOwnedMusicPackPromoInfos() const;

 bool __declspec(property(get=__get__updatingNotOwnedPacks, put=__set__updatingNotOwnedPacks))  _updatingNotOwnedPacks;

constexpr void __set__updatingNotOwnedPacks(bool value) ;

constexpr bool __get__updatingNotOwnedPacks() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 System::Random __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(System::Random value) ;

constexpr System::Random __get__random() const;


// Methods

/// @brief Method InitAfterPlatformWasInitialized addr 0x21bdb00 size 0xec virtual false final false
 void InitAfterPlatformWasInitialized(bool force) ;

/// @brief Method GetPackDataForMainMenuPromoBanner addr 0x21bdc84 size 0x268 virtual false final false
 GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo GetPackDataForMainMenuPromoBanner(ByRef<bool> owned) ;

/// @brief Method MainMenuDlcPromoBannerWasShown addr 0x21bdeec size 0x184 virtual false final false
 void MainMenuDlcPromoBannerWasShown(GlobalNamespace::IBeatmapLevelPack promoPack, ::StringW customText) ;

/// @brief Method MainMenuDlcPromoBannerWasPressed addr 0x21be190 size 0x16c virtual false final false
 void MainMenuDlcPromoBannerWasPressed(GlobalNamespace::IBeatmapLevelPack promoPack, ::StringW customText) ;

/// @brief Method BuyLevelButtonWasPressed addr 0x21be2fc size 0x15c virtual false final false
 void BuyLevelButtonWasPressed(GlobalNamespace::IPreviewBeatmapLevel level, ::StringW page, ::StringW customText) ;

/// @brief Method BuyLevelButtonWasShown addr 0x21be458 size 0x15c virtual false final false
 void BuyLevelButtonWasShown(GlobalNamespace::IPreviewBeatmapLevel level, ::StringW page, ::StringW customText) ;

/// @brief Method BuyPackButtonWasPressed addr 0x21be5b4 size 0x15c virtual false final false
 void BuyPackButtonWasPressed(GlobalNamespace::IBeatmapLevelPack pack, ::StringW page, ::StringW customText) ;

/// @brief Method BuyPackButtonWasShown addr 0x21be710 size 0x15c virtual false final false
 void BuyPackButtonWasShown(GlobalNamespace::IBeatmapLevelPack pack, ::StringW page, ::StringW customText) ;

/// @brief Method GetExperimentEventData addr 0x21be070 size 0x120 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText) ;

/// @brief Method UpdateNotOwnedPacksAsync addr 0x21bdbec size 0x98 virtual false final false
 void UpdateNotOwnedPacksAsync() ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x21be86c size 0x4 virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

static GlobalNamespace::DlcPromoPanelModel New_ctor() ;

/// @brief Method .ctor addr 0x21be870 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoPanelModel, "", "DlcPromoPanelModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17, "", "DlcPromoPanelModel/<UpdateNotOwnedPacksAsync>d__17");
