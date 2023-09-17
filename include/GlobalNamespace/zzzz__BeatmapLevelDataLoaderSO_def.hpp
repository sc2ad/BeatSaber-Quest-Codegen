#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCache_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AssetBundleRequest;
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
class BeatmapLevelDataLoaderSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4;
}
namespace {
// Type: ::AssetBundleLevelInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4347))
// CS Name: BeatmapLevelDataLoaderSO::AssetBundleLevelInfo
struct CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath))  assetBundlePath;

constexpr void __set_assetBundlePath(::StringW value) ;

constexpr ::StringW __get_assetBundlePath() const;

 ::StringW __declspec(property(get=__get_levelDataAssetName, put=__set_levelDataAssetName))  levelDataAssetName;

constexpr void __set_levelDataAssetName(::StringW value) ;

constexpr ::StringW __get_levelDataAssetName() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;


// Methods

/// @brief Method .ctor addr 0x21f24cc size 0xc virtual false final false
 void _ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4418))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4348))
// CS Name: BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet
class CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr operator  GlobalNamespace::IDifficultyBeatmapSet() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet __declspec(property(get=__get__difficultyBeatmapSet, put=__set__difficultyBeatmapSet))  _difficultyBeatmapSet;

constexpr void __set__difficultyBeatmapSet(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet __get__difficultyBeatmapSet() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x21f33e4 size 0x8 virtual true final true
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x21f33ec size 0x1c virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "difficultyBeatmapSet", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicSerializedName", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, GlobalNamespace::IBeatmapLevel parentLevel) ;

/// @brief Method .ctor addr 0x21f3370 size 0x74 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet difficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristicSerializedName, GlobalNamespace::IBeatmapLevel parentLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4414))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4349))
// CS Name: BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData
class CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DifficultyBeatmapSet = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;

/// @brief Convert operator to GlobalNamespace::IBeatmapLevelData
constexpr operator  GlobalNamespace::IBeatmapLevelData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__audioClip() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets))  _difficultyBeatmapSets;

constexpr void __set__difficultyBeatmapSets(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet> __get__difficultyBeatmapSets() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;


// Methods

/// @brief Method get_audioClip addr 0x21f3360 size 0x8 virtual true final true
 UnityEngine::AudioClip get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21f3368 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters [CppParam { name: "beatmapLevelData", ty: "GlobalNamespace::BeatmapLevelDataSO", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristicCollection", ty: "GlobalNamespace::BeatmapCharacteristicCollectionSO", modifiers: "", def_value: None }, CppParam { name: "parentLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel parentLevel) ;

/// @brief Method .ctor addr 0x21f319c size 0x1c4 virtual false final false
 void _ctor(GlobalNamespace::BeatmapLevelDataSO beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel parentLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetCoverImageAsync>d__37
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4350))
// CS Name: BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::<GetCoverImageAsync>d__37
struct CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f3410 size 0x268 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f3678 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelFromPreview
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5982)), TypeDefinitionIndex(TypeDefinitionIndex(5984)), TypeDefinitionIndex(TypeDefinitionIndex(4421)), TypeDefinitionIndex(TypeDefinitionIndex(4413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4351))
// CS Name: BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview
class CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetCoverImageAsync_d__37 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37;

using BeatmapLevelData = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData;

/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr operator  GlobalNamespace::IBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IFilePathSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IFilePathSongPreviewAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__level() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData __declspec(property(get=__get__beatmapLevelData, put=__set__beatmapLevelData))  _beatmapLevelData;

constexpr void __set__beatmapLevelData(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData __get__beatmapLevelData() const;


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

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;

 UnityEngine::AudioClip __declspec(property(get=get_songPreviewAudioClip))  songPreviewAudioClip;

 ::StringW __declspec(property(get=get_songPreviewAudioClipPath))  songPreviewAudioClipPath;


// Methods

/// @brief Method get_levelID addr 0x21f24d8 size 0xa0 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x21f2578 size 0xa4 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21f261c size 0xa4 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21f26c0 size 0xa4 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21f2764 size 0xa4 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21f2808 size 0xa4 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21f28ac size 0xa4 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_songDuration addr 0x21f2950 size 0xa4 virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_shuffle addr 0x21f29f4 size 0xa4 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21f2a98 size 0xa4 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21f2b3c size 0xa4 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21f2be0 size 0xa4 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_environmentInfo addr 0x21f2c84 size 0xa4 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21f2d28 size 0xa4 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x21f2dcc size 0xa4 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method get_beatmapLevelData addr 0x21f2e70 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

/// @brief Method get_songPreviewAudioClip addr 0x21f2e78 size 0xb4 virtual true final true
 UnityEngine::AudioClip get_songPreviewAudioClip() ;

/// @brief Method get_songPreviewAudioClipPath addr 0x21f2f2c size 0xd4 virtual true final true
 ::StringW get_songPreviewAudioClipPath() ;

/// @brief Method GetCoverImageAsync addr 0x21f3000 size 0xfc virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters [CppParam { name: "previewLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(GlobalNamespace::IPreviewBeatmapLevel previewLevel) ;

/// @brief Method .ctor addr 0x21f30fc size 0x28 virtual false final false
 void _ctor(GlobalNamespace::IPreviewBeatmapLevel previewLevel) ;

/// @brief Method LoadData addr 0x21f3124 size 0x78 virtual false final false
 void LoadData(GlobalNamespace::BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, GlobalNamespace::BeatmapLevelDataSO beatmapLevelData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelFormAssetBundleAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4352))
// CS Name: BeatmapLevelDataLoaderSO::<LoadBeatmapLevelFormAssetBundleAsync>d__4
struct CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelDataLoaderSO", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelID_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __t__builder, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapLevelDataLoaderSO __4__this, ::StringW assetBundlePath, ::StringW levelDataAssetName, System::Threading::CancellationToken cancellationToken, ::StringW _levelID_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __get___t__builder() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::BeatmapLevelDataLoaderSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelDataLoaderSO value) ;

constexpr GlobalNamespace::BeatmapLevelDataLoaderSO __get___4__this() const;

 ::StringW __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath))  assetBundlePath;

constexpr void __set_assetBundlePath(::StringW value) ;

constexpr ::StringW __get_assetBundlePath() const;

 ::StringW __declspec(property(get=__get_levelDataAssetName, put=__set_levelDataAssetName))  levelDataAssetName;

constexpr void __set_levelDataAssetName(::StringW value) ;

constexpr ::StringW __get_levelDataAssetName() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get__levelID_5__2, put=__set__levelID_5__2))  _levelID_5__2;

constexpr void __set__levelID_5__2(::StringW value) ;

constexpr ::StringW __get__levelID_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f36d0 size 0x418 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f3ae8 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4353))
// CS Name: BeatmapLevelDataLoaderSO::<LoadBeatmapLevelAsync>d__5
struct CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelDataLoaderSO", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __t__builder, GlobalNamespace::BeatmapLevelDataLoaderSO __4__this, ::StringW levelID, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel> __get___t__builder() const;

 GlobalNamespace::BeatmapLevelDataLoaderSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelDataLoaderSO value) ;

constexpr GlobalNamespace::BeatmapLevelDataLoaderSO __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f3b40 size 0x38c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f3ecc size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4354))
// CS Name: BeatmapLevelDataLoaderSO::<>c__DisplayClass6_0
class CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::AssetBundleCreateRequest __declspec(property(get=__get_assetBundleCreateRequest, put=__set_assetBundleCreateRequest))  assetBundleCreateRequest;

constexpr void __set_assetBundleCreateRequest(UnityEngine::AssetBundleCreateRequest value) ;

constexpr UnityEngine::AssetBundleCreateRequest __get_assetBundleCreateRequest() const;

 ::StringW __declspec(property(get=__get_levelDataAssetName, put=__set_levelDataAssetName))  levelDataAssetName;

constexpr void __set_levelDataAssetName(::StringW value) ;

constexpr ::StringW __get_levelDataAssetName() const;

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO> __declspec(property(get=__get_taskSource, put=__set_taskSource))  taskSource;

constexpr void __set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::BeatmapLevelDataSO> __get_taskSource() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x21f3f24 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadBeatmapLevelDataAsync>b__0 addr 0x21f3f2c size 0x1b8 virtual false final false
 void _LoadBeatmapLevelDataAsync_b__0(UnityEngine::AsyncOperation asyncOperation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4355))
// CS Name: BeatmapLevelDataLoaderSO::<>c__DisplayClass6_1
class CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::AssetBundle __declspec(property(get=__get_assetBundle, put=__set_assetBundle))  assetBundle;

constexpr void __set_assetBundle(UnityEngine::AssetBundle value) ;

constexpr UnityEngine::AssetBundle __get_assetBundle() const;

 UnityEngine::AssetBundleRequest __declspec(property(get=__get_assetBundleRequest, put=__set_assetBundleRequest))  assetBundleRequest;

constexpr void __set_assetBundleRequest(UnityEngine::AssetBundleRequest value) ;

constexpr UnityEngine::AssetBundleRequest __get_assetBundleRequest() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1() ;

/// @brief Method .ctor addr 0x21f40e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadBeatmapLevelDataAsync>b__1 addr 0x21f40ec size 0x134 virtual false final false
 void _LoadBeatmapLevelDataAsync_b__1(UnityEngine::AsyncOperation asyncOperation2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelDataAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4356))
// CS Name: BeatmapLevelDataLoaderSO::<LoadBeatmapLevelDataAsync>d__6
struct CORDL_TYPE GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> __t__builder, ::StringW levelDataAssetName, ::StringW assetBundlePath, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6& operator=(GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_levelDataAssetName, put=__set_levelDataAssetName))  levelDataAssetName;

constexpr void __set_levelDataAssetName(::StringW value) ;

constexpr ::StringW __get_levelDataAssetName() const;

 ::StringW __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath))  assetBundlePath;

constexpr void __set_assetBundlePath(::StringW value) ;

constexpr ::StringW __get_assetBundlePath() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f4220 size 0x300 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f4520 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelDataLoaderSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4357))
// CS Name: BeatmapLevelDataLoaderSO
class CORDL_TYPE BeatmapLevelDataLoaderSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _LoadBeatmapLevelDataAsync_d__6 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6;

using __c__DisplayClass6_1 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1;

using __c__DisplayClass6_0 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0;

using _LoadBeatmapLevelAsync_d__5 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5;

using _LoadBeatmapLevelFormAssetBundleAsync_d__4 = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4;

using BeatmapLevelFromPreview = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview;

using AssetBundleLevelInfo = GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapLevelDataLoaderSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoaderSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelDataLoaderSO(BeatmapLevelDataLoaderSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoaderSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelDataLoaderSO(BeatmapLevelDataLoaderSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelDataLoaderSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelDataLoaderSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelDataLoaderSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelDataLoaderSO& operator=(BeatmapLevelDataLoaderSO&& o) noexcept = default;
  constexpr BeatmapLevelDataLoaderSO& operator=(BeatmapLevelDataLoaderSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicCollectionSO __declspec(property(get=__get__allBeatmapCharacteristicCollection, put=__set__allBeatmapCharacteristicCollection))  _allBeatmapCharacteristicCollection;

constexpr void __set__allBeatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollectionSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollectionSO __get__allBeatmapCharacteristicCollection() const;

 GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get__beatmapLevelsAsyncCache, put=__set__beatmapLevelsAsyncCache))  _beatmapLevelsAsyncCache;

constexpr void __set__beatmapLevelsAsyncCache(GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel> value) ;

constexpr GlobalNamespace::AsyncCache_2<::StringW,GlobalNamespace::IBeatmapLevel> __get__beatmapLevelsAsyncCache() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo> __declspec(property(get=__get__bundleLevelInfos, put=__set__bundleLevelInfos))  _bundleLevelInfos;

constexpr void __set__bundleLevelInfos(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo> __get__bundleLevelInfos() const;


// Methods

/// @brief Method LoadBeatmapLevelFormAssetBundleAsync addr 0x21f2138 size 0x120 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> LoadBeatmapLevelFormAssetBundleAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::StringW assetBundlePath, ::StringW levelDataAssetName, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LoadBeatmapLevelAsync addr 0x21f2258 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel> LoadBeatmapLevelAsync(::StringW levelID) ;

/// @brief Method LoadBeatmapLevelDataAsync addr 0x21f2354 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO> LoadBeatmapLevelDataAsync(::StringW assetBundlePath, ::StringW levelDataAssetName) ;

// Ctor Parameters []
explicit BeatmapLevelDataLoaderSO() ;

/// @brief Method .ctor addr 0x21f2450 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoaderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoaderSO, "", "BeatmapLevelDataLoaderSO");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO____c__DisplayClass6_1, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, "", "BeatmapLevelDataLoaderSO/AssetBundleLevelInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/<GetCoverImageAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelDataAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4");
} // end anonymous namespace
