#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Type: ::IPreviewBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4419))
// CS Name: IPreviewBeatmapLevel
class CORDL_TYPE IPreviewBeatmapLevel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPreviewBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPreviewBeatmapLevel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


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


// Methods

/// @brief Method get_levelID addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_previewDuration() ;

/// @brief Method get_songDuration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_songDuration() ;

/// @brief Method get_environmentInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method GetCoverImageAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPreviewBeatmapLevel, "", "IPreviewBeatmapLevel");
