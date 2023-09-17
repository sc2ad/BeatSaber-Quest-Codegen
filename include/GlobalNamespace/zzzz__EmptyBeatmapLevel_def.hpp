#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyBeatmapLevel;
}
// Type: ::EmptyBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4406))
// CS Name: EmptyBeatmapLevel
class CORDL_TYPE EmptyBeatmapLevel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevel
constexpr operator  ::GlobalNamespace::IBeatmapLevel() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EmptyBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevel", modifiers: " const&", def_value: None }]
constexpr EmptyBeatmapLevel(EmptyBeatmapLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevel", modifiers: "&&", def_value: None }]
constexpr EmptyBeatmapLevel(EmptyBeatmapLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyBeatmapLevel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyBeatmapLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyBeatmapLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyBeatmapLevel& operator=(EmptyBeatmapLevel&& o) noexcept = default;
  constexpr EmptyBeatmapLevel& operator=(EmptyBeatmapLevel const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatmapLevelData __declspec(property(get=__get__beatmapLevelData_k__BackingField, put=__set__beatmapLevelData_k__BackingField))  _beatmapLevelData_k__BackingField;

constexpr void __set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData value) ;

constexpr ::GlobalNamespace::IBeatmapLevelData __get__beatmapLevelData_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_levelID))  levelID;

 ::StringW __declspec(property(get=get_songName))  songName;

 ::StringW __declspec(property(get=get_songSubName))  songSubName;

 ::StringW __declspec(property(get=get_songAuthorName))  songAuthorName;

 ::StringW __declspec(property(get=get_levelAuthorName))  levelAuthorName;

 float_t __declspec(property(get=get_beatsPerMinute))  beatsPerMinute;

 float_t __declspec(property(get=get_songTimeOffset))  songTimeOffset;

 float_t __declspec(property(get=get_shuffle))  shuffle;

 float_t __declspec(property(get=get_shufflePeriod))  shufflePeriod;

 float_t __declspec(property(get=get_previewStartTime))  previewStartTime;

 float_t __declspec(property(get=get_previewDuration))  previewDuration;

 float_t __declspec(property(get=get_songDuration))  songDuration;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo))  environmentInfo;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_allDirectionsEnvironmentInfo))  allDirectionsEnvironmentInfo;

 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos))  environmentInfos;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;

 ::GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;


// Methods

/// @brief Method get_levelID addr 0x21ea7d0 size 0x8 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x21ea7d8 size 0x8 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21ea7e0 size 0x8 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21ea7e8 size 0x8 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21ea7f0 size 0x8 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21ea7f8 size 0x8 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21ea800 size 0x8 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x21ea808 size 0x8 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21ea810 size 0x8 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21ea818 size 0x8 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21ea820 size 0x8 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_songDuration addr 0x21ea828 size 0x8 virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_environmentInfo addr 0x21ea830 size 0x8 virtual true final true
 ::GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21ea838 size 0x8 virtual true final true
 ::GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x21ea840 size 0x7c virtual true final true
 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x21ea8bc size 0x8 virtual true final true
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method GetPreviewAudioClipAsync addr 0x21ea8c4 size 0x40 virtual false final false
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetCoverImageAsync addr 0x21ea904 size 0x40 virtual true final true
 ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method get_beatmapLevelData addr 0x21ea944 size 0x8 virtual true final true
 ::GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

// Ctor Parameters []
explicit EmptyBeatmapLevel() ;

/// @brief Method .ctor addr 0x21ea94c size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EmptyBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyBeatmapLevel, "", "EmptyBeatmapLevel");
