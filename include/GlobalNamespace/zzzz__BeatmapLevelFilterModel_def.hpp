#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelFilterModel;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;
}
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4366))
// CS Name: BeatmapLevelFilterModel::<>c__DisplayClass0_0
class CORDL_TYPE GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0(GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0(GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_searchByText, put=__set_searchByText))  searchByText;

constexpr void __set_searchByText(bool value) ;

constexpr bool __get_searchByText() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_searchTexts, put=__set_searchTexts))  searchTexts;

constexpr void __set_searchTexts(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_searchTexts() const;

 GlobalNamespace::LevelFilterParams __declspec(property(get=__get_levelFilterParams, put=__set_levelFilterParams))  levelFilterParams;

constexpr void __set_levelFilterParams(GlobalNamespace::LevelFilterParams value) ;

constexpr GlobalNamespace::LevelFilterParams __get_levelFilterParams() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get_playerDataModel, put=__set_playerDataModel))  playerDataModel;

constexpr void __set_playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get_playerDataModel() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 New_ctor() ;

/// @brief Method .ctor addr 0x21e3840 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FilerBeatmapLevelPackCollectionAsync>b__0 addr 0x21e3848 size 0x760 virtual false final false
 bool _FilerBeatmapLevelPackCollectionAsync_b__0(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<FilerBeatmapLevelPackCollectionAsync>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4367))
// CS Name: BeatmapLevelFilterModel::<FilerBeatmapLevelPackCollectionAsync>d__0
struct CORDL_TYPE GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection>", modifiers: "", def_value: None }, CppParam { name: "levelFilterParams", ty: "GlobalNamespace::LevelFilterParams", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "GlobalNamespace::PlayerDataModel", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: None }, CppParam { name: "additionalContentModel", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> __t__builder, GlobalNamespace::LevelFilterParams levelFilterParams, GlobalNamespace::PlayerDataModel playerDataModel, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0& operator=(GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0& operator=(GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> __get___t__builder() const;

 GlobalNamespace::LevelFilterParams __declspec(property(get=__get_levelFilterParams, put=__set_levelFilterParams))  levelFilterParams;

constexpr void __set_levelFilterParams(GlobalNamespace::LevelFilterParams value) ;

constexpr GlobalNamespace::LevelFilterParams __get_levelFilterParams() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get_playerDataModel, put=__set_playerDataModel))  playerDataModel;

constexpr void __set_playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get_playerDataModel() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_beatmapLevelPacks, put=__set_beatmapLevelPacks))  beatmapLevelPacks;

constexpr void __set_beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get_beatmapLevelPacks() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get_additionalContentModel, put=__set_additionalContentModel))  additionalContentModel;

constexpr void __set_additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get_additionalContentModel() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e3fa8 size 0x404 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e43ac size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetAllBeatmapLevelsAsync>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4368))
// CS Name: BeatmapLevelFilterModel::<GetAllBeatmapLevelsAsync>d__2
struct CORDL_TYPE GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: None }, CppParam { name: "songPackMask", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "onlyOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "additionalContentModel", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "onlyNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_levels_5__2", ty: "System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__6", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __t__builder, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken, bool onlyNotOwned, System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> _levels_5__2, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __7__wrap2, int32_t __7__wrap3, System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> __7__wrap4, GlobalNamespace::IPreviewBeatmapLevel _beatmapLevel_5__6, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2& operator=(GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2& operator=(GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x88};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __get___t__builder() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_beatmapLevelPacks, put=__set_beatmapLevelPacks))  beatmapLevelPacks;

constexpr void __set_beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get_beatmapLevelPacks() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get_songPackMask, put=__set_songPackMask))  songPackMask;

constexpr void __set_songPackMask(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get_songPackMask() const;

 bool __declspec(property(get=__get_onlyOwned, put=__set_onlyOwned))  onlyOwned;

constexpr void __set_onlyOwned(bool value) ;

constexpr bool __get_onlyOwned() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get_additionalContentModel, put=__set_additionalContentModel))  additionalContentModel;

constexpr void __set_additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get_additionalContentModel() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 bool __declspec(property(get=__get_onlyNotOwned, put=__set_onlyNotOwned))  onlyNotOwned;

constexpr void __set_onlyNotOwned(bool value) ;

constexpr bool __get_onlyNotOwned() const;

 System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get__levels_5__2, put=__set__levels_5__2))  _levels_5__2;

constexpr void __set__levels_5__2(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> __get__levels_5__2() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;

 System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4))  __7__wrap4;

constexpr void __set___7__wrap4(System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> __get___7__wrap4() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__beatmapLevel_5__6, put=__set__beatmapLevel_5__6))  _beatmapLevel_5__6;

constexpr void __set__beatmapLevel_5__6(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__beatmapLevel_5__6() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e4404 size 0x98c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e4d90 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelFilterModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4369))
// CS Name: BeatmapLevelFilterModel
class CORDL_TYPE BeatmapLevelFilterModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetAllBeatmapLevelsAsync_d__2 = GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2;

using _FilerBeatmapLevelPackCollectionAsync_d__0 = GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0;

using __c__DisplayClass0_0 = GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapLevelFilterModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelFilterModel", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelFilterModel(BeatmapLevelFilterModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelFilterModel", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelFilterModel(BeatmapLevelFilterModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelFilterModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelFilterModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelFilterModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelFilterModel& operator=(BeatmapLevelFilterModel&& o) noexcept = default;
  constexpr BeatmapLevelFilterModel& operator=(BeatmapLevelFilterModel const& o) noexcept = default;
                


// Methods

/// @brief Method FilerBeatmapLevelPackCollectionAsync addr 0x21e33bc size 0x120 virtual false final false
static System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection> FilerBeatmapLevelPackCollectionAsync(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::LevelFilterParams levelFilterParams, GlobalNamespace::PlayerDataModel playerDataModel, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LevelContainsText addr 0x21e34dc size 0x230 virtual false final false
static bool LevelContainsText(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, ::ArrayW<::StringW> searchTexts) ;

/// @brief Method GetAllBeatmapLevelsAsync addr 0x21e370c size 0x134 virtual false final false
static System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> GetAllBeatmapLevelsAsync(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, bool onlyNotOwned, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelFilterModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel, "", "BeatmapLevelFilterModel");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0, "", "BeatmapLevelFilterModel/<>c__DisplayClass0_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0, "", "BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2, "", "BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2");
