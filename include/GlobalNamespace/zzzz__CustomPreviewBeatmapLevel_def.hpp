#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
struct GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66;
}
// Type: ::<GetCoverImageAsync>d__66
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4404))
// CS Name: CustomPreviewBeatmapLevel::<GetCoverImageAsync>d__66
struct CORDL_TYPE GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::CustomPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, GlobalNamespace::CustomPreviewBeatmapLevel __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66(GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66 const&) = default;
                    constexpr GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66(GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66&&) = default;
                    constexpr GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66& operator=(GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66& operator=(GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __get___t__builder() const;

 GlobalNamespace::CustomPreviewBeatmapLevel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::CustomPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::CustomPreviewBeatmapLevel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21ea3ec size 0x38c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21ea778 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CustomPreviewBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4405))
// CS Name: CustomPreviewBeatmapLevel
class CORDL_TYPE CustomPreviewBeatmapLevel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetCoverImageAsync_d__66 = GlobalNamespace::GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IFilePathSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IFilePathSongPreviewAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~CustomPreviewBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: " const&", def_value: None }]
constexpr CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: "&&", def_value: None }]
constexpr CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomPreviewBeatmapLevel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomPreviewBeatmapLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomPreviewBeatmapLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomPreviewBeatmapLevel& operator=(CustomPreviewBeatmapLevel&& o) noexcept = default;
  constexpr CustomPreviewBeatmapLevel& operator=(CustomPreviewBeatmapLevel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ISpriteAsyncLoader __declspec(property(get=__get__spriteAsyncLoader_k__BackingField, put=__set__spriteAsyncLoader_k__BackingField))  _spriteAsyncLoader_k__BackingField;

constexpr void __set__spriteAsyncLoader_k__BackingField(GlobalNamespace::ISpriteAsyncLoader value) ;

constexpr GlobalNamespace::ISpriteAsyncLoader __get__spriteAsyncLoader_k__BackingField() const;

 GlobalNamespace::StandardLevelInfoSaveData __declspec(property(get=__get__standardLevelInfoSaveData_k__BackingField, put=__set__standardLevelInfoSaveData_k__BackingField))  _standardLevelInfoSaveData_k__BackingField;

constexpr void __set__standardLevelInfoSaveData_k__BackingField(GlobalNamespace::StandardLevelInfoSaveData value) ;

constexpr GlobalNamespace::StandardLevelInfoSaveData __get__standardLevelInfoSaveData_k__BackingField() const;

 ::StringW __declspec(property(get=__get__customLevelPath_k__BackingField, put=__set__customLevelPath_k__BackingField))  _customLevelPath_k__BackingField;

constexpr void __set__customLevelPath_k__BackingField(::StringW value) ;

constexpr ::StringW __get__customLevelPath_k__BackingField() const;

 ::StringW __declspec(property(get=__get__levelID_k__BackingField, put=__set__levelID_k__BackingField))  _levelID_k__BackingField;

constexpr void __set__levelID_k__BackingField(::StringW value) ;

constexpr ::StringW __get__levelID_k__BackingField() const;

 ::StringW __declspec(property(get=__get__songName_k__BackingField, put=__set__songName_k__BackingField))  _songName_k__BackingField;

constexpr void __set__songName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__songName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__songSubName_k__BackingField, put=__set__songSubName_k__BackingField))  _songSubName_k__BackingField;

constexpr void __set__songSubName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__songSubName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__songAuthorName_k__BackingField, put=__set__songAuthorName_k__BackingField))  _songAuthorName_k__BackingField;

constexpr void __set__songAuthorName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__songAuthorName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__levelAuthorName_k__BackingField, put=__set__levelAuthorName_k__BackingField))  _levelAuthorName_k__BackingField;

constexpr void __set__levelAuthorName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__levelAuthorName_k__BackingField() const;

 float_t __declspec(property(get=__get__beatsPerMinute_k__BackingField, put=__set__beatsPerMinute_k__BackingField))  _beatsPerMinute_k__BackingField;

constexpr void __set__beatsPerMinute_k__BackingField(float_t value) ;

constexpr float_t __get__beatsPerMinute_k__BackingField() const;

 float_t __declspec(property(get=__get__songTimeOffset_k__BackingField, put=__set__songTimeOffset_k__BackingField))  _songTimeOffset_k__BackingField;

constexpr void __set__songTimeOffset_k__BackingField(float_t value) ;

constexpr float_t __get__songTimeOffset_k__BackingField() const;

 float_t __declspec(property(get=__get__songDuration_k__BackingField, put=__set__songDuration_k__BackingField))  _songDuration_k__BackingField;

constexpr void __set__songDuration_k__BackingField(float_t value) ;

constexpr float_t __get__songDuration_k__BackingField() const;

 float_t __declspec(property(get=__get__shuffle_k__BackingField, put=__set__shuffle_k__BackingField))  _shuffle_k__BackingField;

constexpr void __set__shuffle_k__BackingField(float_t value) ;

constexpr float_t __get__shuffle_k__BackingField() const;

 float_t __declspec(property(get=__get__shufflePeriod_k__BackingField, put=__set__shufflePeriod_k__BackingField))  _shufflePeriod_k__BackingField;

constexpr void __set__shufflePeriod_k__BackingField(float_t value) ;

constexpr float_t __get__shufflePeriod_k__BackingField() const;

 float_t __declspec(property(get=__get__previewStartTime_k__BackingField, put=__set__previewStartTime_k__BackingField))  _previewStartTime_k__BackingField;

constexpr void __set__previewStartTime_k__BackingField(float_t value) ;

constexpr float_t __get__previewStartTime_k__BackingField() const;

 float_t __declspec(property(get=__get__previewDuration_k__BackingField, put=__set__previewDuration_k__BackingField))  _previewDuration_k__BackingField;

constexpr void __set__previewDuration_k__BackingField(float_t value) ;

constexpr float_t __get__previewDuration_k__BackingField() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo_k__BackingField, put=__set__environmentInfo_k__BackingField))  _environmentInfo_k__BackingField;

constexpr void __set__environmentInfo_k__BackingField(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo_k__BackingField() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__allDirectionsEnvironmentInfo_k__BackingField, put=__set__allDirectionsEnvironmentInfo_k__BackingField))  _allDirectionsEnvironmentInfo_k__BackingField;

constexpr void __set__allDirectionsEnvironmentInfo_k__BackingField(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__allDirectionsEnvironmentInfo_k__BackingField() const;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__environmentInfos_k__BackingField, put=__set__environmentInfos_k__BackingField))  _environmentInfos_k__BackingField;

constexpr void __set__environmentInfos_k__BackingField(::ArrayW<GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __get__environmentInfos_k__BackingField() const;

 UnityEngine::Sprite __declspec(property(get=__get__defaultCoverImage_k__BackingField, put=__set__defaultCoverImage_k__BackingField))  _defaultCoverImage_k__BackingField;

constexpr void __set__defaultCoverImage_k__BackingField(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__defaultCoverImage_k__BackingField() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__previewDifficultyBeatmapSets_k__BackingField, put=__set__previewDifficultyBeatmapSets_k__BackingField))  _previewDifficultyBeatmapSets_k__BackingField;

constexpr void __set__previewDifficultyBeatmapSets_k__BackingField(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__previewDifficultyBeatmapSets_k__BackingField() const;

 ::ArrayW<GlobalNamespace::ColorScheme> __declspec(property(get=__get__beatmapOverrideColorSchemes_k__BackingField, put=__set__beatmapOverrideColorSchemes_k__BackingField))  _beatmapOverrideColorSchemes_k__BackingField;

constexpr void __set__beatmapOverrideColorSchemes_k__BackingField(::ArrayW<GlobalNamespace::ColorScheme> value) ;

constexpr ::ArrayW<GlobalNamespace::ColorScheme> __get__beatmapOverrideColorSchemes_k__BackingField() const;

 UnityEngine::Sprite __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__coverImage() const;


// Properties

 GlobalNamespace::ISpriteAsyncLoader __declspec(property(get=get_spriteAsyncLoader))  spriteAsyncLoader;

 GlobalNamespace::StandardLevelInfoSaveData __declspec(property(get=get_standardLevelInfoSaveData))  standardLevelInfoSaveData;

 ::StringW __declspec(property(get=get_customLevelPath))  customLevelPath;

 ::StringW __declspec(property(get=get_levelID))  levelID;

 ::StringW __declspec(property(get=get_songName))  songName;

 ::StringW __declspec(property(get=get_songSubName))  songSubName;

 ::StringW __declspec(property(get=get_songAuthorName))  songAuthorName;

 ::StringW __declspec(property(get=get_levelAuthorName))  levelAuthorName;

 float_t __declspec(property(get=get_beatsPerMinute))  beatsPerMinute;

 float_t __declspec(property(get=get_songTimeOffset))  songTimeOffset;

 float_t __declspec(property(get=get_songDuration))  songDuration;

 float_t __declspec(property(get=get_shuffle))  shuffle;

 float_t __declspec(property(get=get_shufflePeriod))  shufflePeriod;

 float_t __declspec(property(get=get_previewStartTime))  previewStartTime;

 float_t __declspec(property(get=get_previewDuration))  previewDuration;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo))  environmentInfo;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_allDirectionsEnvironmentInfo))  allDirectionsEnvironmentInfo;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos))  environmentInfos;

 UnityEngine::Sprite __declspec(property(get=get_defaultCoverImage))  defaultCoverImage;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;

 ::StringW __declspec(property(get=get_songPreviewAudioClipPath))  songPreviewAudioClipPath;

 ::ArrayW<GlobalNamespace::ColorScheme> __declspec(property(get=get_beatmapOverrideColorSchemes))  beatmapOverrideColorSchemes;


// Methods

/// @brief Method get_spriteAsyncLoader addr 0x21ea248 size 0x8 virtual false final false
 GlobalNamespace::ISpriteAsyncLoader get_spriteAsyncLoader() ;

/// @brief Method get_standardLevelInfoSaveData addr 0x21ea250 size 0x8 virtual false final false
 GlobalNamespace::StandardLevelInfoSaveData get_standardLevelInfoSaveData() ;

/// @brief Method get_customLevelPath addr 0x21ea258 size 0x8 virtual false final false
 ::StringW get_customLevelPath() ;

/// @brief Method get_levelID addr 0x21ea260 size 0x8 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x21ea268 size 0x8 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21ea270 size 0x8 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21ea278 size 0x8 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21ea280 size 0x8 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21ea288 size 0x8 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21ea290 size 0x8 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_songDuration addr 0x21ea298 size 0x8 virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_shuffle addr 0x21ea2a0 size 0x8 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21ea2a8 size 0x8 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21ea2b0 size 0x8 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21ea2b8 size 0x8 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_environmentInfo addr 0x21ea2c0 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21ea2c8 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x21ea2d0 size 0x8 virtual true final true
 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_defaultCoverImage addr 0x21ea2d8 size 0x8 virtual false final false
 UnityEngine::Sprite get_defaultCoverImage() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x21ea2e0 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method get_songPreviewAudioClipPath addr 0x21e9fe8 size 0x70 virtual true final true
 ::StringW get_songPreviewAudioClipPath() ;

/// @brief Method get_beatmapOverrideColorSchemes addr 0x21ea2e8 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::ColorScheme> get_beatmapOverrideColorSchemes() ;

/// @brief Method GetCoverImageAsync addr 0x21ea2f0 size 0xfc virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) ;

static GlobalNamespace::CustomPreviewBeatmapLevel New_ctor(UnityEngine::Sprite defaultCoverImage, GlobalNamespace::StandardLevelInfoSaveData standardLevelInfoSaveData, ::StringW customLevelPath, GlobalNamespace::ISpriteAsyncLoader spriteAsyncLoader, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::EnvironmentInfoSO allDirectionsEnvironmentInfo, ::ArrayW<GlobalNamespace::EnvironmentInfoSO> environmentInfos, ::ArrayW<GlobalNamespace::ColorScheme> beatmapOverrideColorSchemes, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSets) ;

/// @brief Method .ctor addr 0x21ea118 size 0xe4 virtual false final false
 void _ctor(UnityEngine::Sprite defaultCoverImage, GlobalNamespace::StandardLevelInfoSaveData standardLevelInfoSaveData, ::StringW customLevelPath, GlobalNamespace::ISpriteAsyncLoader spriteAsyncLoader, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::EnvironmentInfoSO allDirectionsEnvironmentInfo, ::ArrayW<GlobalNamespace::EnvironmentInfoSO> environmentInfos, ::ArrayW<GlobalNamespace::ColorScheme> beatmapOverrideColorSchemes, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomPreviewBeatmapLevel, "", "CustomPreviewBeatmapLevel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__66, "", "CustomPreviewBeatmapLevel/<GetCoverImageAsync>d__66");
