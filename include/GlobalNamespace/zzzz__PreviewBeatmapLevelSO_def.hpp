#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57;
}
namespace GlobalNamespace {
struct GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57;
}
namespace GlobalNamespace {
struct GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56;
}
// Type: ::<GetPreviewAudioClipAsync>d__56
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4423))
// CS Name: PreviewBeatmapLevelSO::<GetPreviewAudioClipAsync>d__56
struct CORDL_TYPE GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::PreviewBeatmapLevelSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::PreviewBeatmapLevelSO __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept;


                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56(GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56 const&) = default;
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56(GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56&&) = default;
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56& operator=(GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56& operator=(GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::PreviewBeatmapLevelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PreviewBeatmapLevelSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21eca14 size 0x230 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21ecc44 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetCoverImageAsync>d__57
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4424))
// CS Name: PreviewBeatmapLevelSO::<GetCoverImageAsync>d__57
struct CORDL_TYPE GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::PreviewBeatmapLevelSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::PreviewBeatmapLevelSO __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57(GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57 const&) = default;
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57(GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57&&) = default;
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57& operator=(GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57& operator=(GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::PreviewBeatmapLevelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PreviewBeatmapLevelSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21ecc9c size 0x230 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21ececc size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PreviewBeatmapLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4425))
// CS Name: PreviewBeatmapLevelSO
class CORDL_TYPE PreviewBeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _GetCoverImageAsync_d__57 = GlobalNamespace::GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57;

using _GetPreviewAudioClipAsync_d__56 = GlobalNamespace::GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~PreviewBeatmapLevelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: " const&", def_value: None }]
constexpr PreviewBeatmapLevelSO(PreviewBeatmapLevelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: "&&", def_value: None }]
constexpr PreviewBeatmapLevelSO(PreviewBeatmapLevelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewBeatmapLevelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PreviewBeatmapLevelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewBeatmapLevelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewBeatmapLevelSO& operator=(PreviewBeatmapLevelSO&& o) noexcept = default;
  constexpr PreviewBeatmapLevelSO& operator=(PreviewBeatmapLevelSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelID, put=__set__levelID))  _levelID;

constexpr void __set__levelID(::StringW value) ;

constexpr ::StringW __get__levelID() const;

 ::StringW __declspec(property(get=__get__songName, put=__set__songName))  _songName;

constexpr void __set__songName(::StringW value) ;

constexpr ::StringW __get__songName() const;

 ::StringW __declspec(property(get=__get__songSubName, put=__set__songSubName))  _songSubName;

constexpr void __set__songSubName(::StringW value) ;

constexpr ::StringW __get__songSubName() const;

 ::StringW __declspec(property(get=__get__songAuthorName, put=__set__songAuthorName))  _songAuthorName;

constexpr void __set__songAuthorName(::StringW value) ;

constexpr ::StringW __get__songAuthorName() const;

 ::StringW __declspec(property(get=__get__levelAuthorName, put=__set__levelAuthorName))  _levelAuthorName;

constexpr void __set__levelAuthorName(::StringW value) ;

constexpr ::StringW __get__levelAuthorName() const;

 UnityEngine::AudioClip __declspec(property(get=__get__previewAudioClip, put=__set__previewAudioClip))  _previewAudioClip;

constexpr void __set__previewAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__previewAudioClip() const;

 float_t __declspec(property(get=__get__beatsPerMinute, put=__set__beatsPerMinute))  _beatsPerMinute;

constexpr void __set__beatsPerMinute(float_t value) ;

constexpr float_t __get__beatsPerMinute() const;

 float_t __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset))  _songTimeOffset;

constexpr void __set__songTimeOffset(float_t value) ;

constexpr float_t __get__songTimeOffset() const;

 float_t __declspec(property(get=__get__shuffle, put=__set__shuffle))  _shuffle;

constexpr void __set__shuffle(float_t value) ;

constexpr float_t __get__shuffle() const;

 float_t __declspec(property(get=__get__shufflePeriod, put=__set__shufflePeriod))  _shufflePeriod;

constexpr void __set__shufflePeriod(float_t value) ;

constexpr float_t __get__shufflePeriod() const;

 float_t __declspec(property(get=__get__previewStartTime, put=__set__previewStartTime))  _previewStartTime;

constexpr void __set__previewStartTime(float_t value) ;

constexpr float_t __get__previewStartTime() const;

 float_t __declspec(property(get=__get__previewDuration, put=__set__previewDuration))  _previewDuration;

constexpr void __set__previewDuration(float_t value) ;

constexpr float_t __get__previewDuration() const;

 float_t __declspec(property(get=__get__songDuration, put=__set__songDuration))  _songDuration;

constexpr void __set__songDuration(float_t value) ;

constexpr float_t __get__songDuration() const;

 UnityEngine::Sprite __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__coverImage() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__allDirectionsEnvironmentInfo, put=__set__allDirectionsEnvironmentInfo))  _allDirectionsEnvironmentInfo;

constexpr void __set__allDirectionsEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__allDirectionsEnvironmentInfo() const;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__environmentInfos, put=__set__environmentInfos))  _environmentInfos;

constexpr void __set__environmentInfos(::ArrayW<GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __get__environmentInfos() const;

 ::ArrayW<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__previewDifficultyBeatmapSets, put=__set__previewDifficultyBeatmapSets))  _previewDifficultyBeatmapSets;

constexpr void __set__previewDifficultyBeatmapSets(::ArrayW<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr ::ArrayW<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__previewDifficultyBeatmapSets() const;

 bool __declspec(property(get=__get__ignore360MovementBeatmaps, put=__set__ignore360MovementBeatmaps))  _ignore360MovementBeatmaps;

constexpr void __set__ignore360MovementBeatmaps(bool value) ;

constexpr bool __get__ignore360MovementBeatmaps() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__no360MovementPreviewDifficultyBeatmapSets, put=__set__no360MovementPreviewDifficultyBeatmapSets))  _no360MovementPreviewDifficultyBeatmapSets;

constexpr void __set__no360MovementPreviewDifficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__no360MovementPreviewDifficultyBeatmapSets() const;


// Properties

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

 UnityEngine::AudioClip __declspec(property(get=get_songPreviewAudioClip))  songPreviewAudioClip;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;


// Methods

/// @brief Method get_levelID addr 0x21ec730 size 0x8 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x21ec738 size 0x8 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21ec740 size 0x8 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21ec748 size 0x8 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21ec750 size 0x8 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21ec758 size 0x8 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21ec760 size 0x8 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_songDuration addr 0x21ec768 size 0x8 virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_shuffle addr 0x21ec770 size 0x8 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21ec778 size 0x8 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21ec780 size 0x8 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21ec788 size 0x8 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_environmentInfo addr 0x21ec790 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21ec798 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x21ec7a0 size 0x8 virtual true final true
 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_songPreviewAudioClip addr 0x21ec7a8 size 0x8 virtual true final true
 UnityEngine::AudioClip get_songPreviewAudioClip() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x21ec7b0 size 0x1c virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method OnEnable addr 0x21ec7cc size 0x28 virtual true final false
 void OnEnable() ;

/// @brief Method InitData addr 0x21ec7f4 size 0x20 virtual false final false
 void InitData() ;

/// @brief Method GetPreviewAudioClipAsync addr 0x21ec814 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetCoverImageAsync addr 0x21ec910 size 0xfc virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) ;

static GlobalNamespace::PreviewBeatmapLevelSO New_ctor() ;

/// @brief Method .ctor addr 0x21eca0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PreviewBeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelSO, "", "PreviewBeatmapLevelSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PreviewBeatmapLevelSO___GetCoverImageAsync_d__57, "", "PreviewBeatmapLevelSO/<GetCoverImageAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__56, "", "PreviewBeatmapLevelSO/<GetPreviewAudioClipAsync>d__56");
