#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap;
}
namespace GlobalNamespace {
class ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck;
}
// Type: ::DifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4440))
// CS Name: StandardLevelInfoSaveData::DifficultyBeatmapSet
class CORDL_TYPE ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet& operator=(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet&& o) noexcept = default;
  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet& operator=(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__beatmapCharacteristicName, put=__set__beatmapCharacteristicName))  _beatmapCharacteristicName;

constexpr void __set__beatmapCharacteristicName(::StringW value) ;

constexpr ::StringW __get__beatmapCharacteristicName() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> __get__difficultyBeatmaps() const;


// Properties

 ::StringW __declspec(property(get=get_beatmapCharacteristicName))  beatmapCharacteristicName;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristicName addr 0x21ef220 size 0x8 virtual false final false
 ::StringW get_beatmapCharacteristicName() ;

/// @brief Method get_difficultyBeatmaps addr 0x21ef228 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristicName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmaps", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet(::StringW beatmapCharacteristicName, ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method .ctor addr 0x21ef1f4 size 0x2c virtual false final false
 void _ctor(::StringW beatmapCharacteristicName, ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap> difficultyBeatmaps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4441))
// CS Name: StandardLevelInfoSaveData::DifficultyBeatmap
class CORDL_TYPE ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap& operator=(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap&& o) noexcept = default;
  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap& operator=(____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__difficulty, put=__set__difficulty))  _difficulty;

constexpr void __set__difficulty(::StringW value) ;

constexpr ::StringW __get__difficulty() const;

 int32_t __declspec(property(get=__get__difficultyRank, put=__set__difficultyRank))  _difficultyRank;

constexpr void __set__difficultyRank(int32_t value) ;

constexpr int32_t __get__difficultyRank() const;

 ::StringW __declspec(property(get=__get__beatmapFilename, put=__set__beatmapFilename))  _beatmapFilename;

constexpr void __set__beatmapFilename(::StringW value) ;

constexpr ::StringW __get__beatmapFilename() const;

 float_t __declspec(property(get=__get__noteJumpMovementSpeed, put=__set__noteJumpMovementSpeed))  _noteJumpMovementSpeed;

constexpr void __set__noteJumpMovementSpeed(float_t value) ;

constexpr float_t __get__noteJumpMovementSpeed() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset, put=__set__noteJumpStartBeatOffset))  _noteJumpStartBeatOffset;

constexpr void __set__noteJumpStartBeatOffset(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset() const;

 int32_t __declspec(property(get=__get__beatmapColorSchemeIdx, put=__set__beatmapColorSchemeIdx))  _beatmapColorSchemeIdx;

constexpr void __set__beatmapColorSchemeIdx(int32_t value) ;

constexpr int32_t __get__beatmapColorSchemeIdx() const;

 int32_t __declspec(property(get=__get__environmentNameIdx, put=__set__environmentNameIdx))  _environmentNameIdx;

constexpr void __set__environmentNameIdx(int32_t value) ;

constexpr int32_t __get__environmentNameIdx() const;


// Properties

 ::StringW __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 ::StringW __declspec(property(get=get_beatmapFilename))  beatmapFilename;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 int32_t __declspec(property(get=get_beatmapColorSchemeIdx))  beatmapColorSchemeIdx;

 int32_t __declspec(property(get=get_environmentNameIdx))  environmentNameIdx;


// Methods

/// @brief Method get_difficulty addr 0x21ef230 size 0x8 virtual false final false
 ::StringW get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x21ef238 size 0x8 virtual false final false
 int32_t get_difficultyRank() ;

/// @brief Method get_beatmapFilename addr 0x21ef240 size 0x8 virtual false final false
 ::StringW get_beatmapFilename() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x21ef248 size 0x8 virtual false final false
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x21ef250 size 0x8 virtual false final false
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_beatmapColorSchemeIdx addr 0x21ef258 size 0x8 virtual false final false
 int32_t get_beatmapColorSchemeIdx() ;

/// @brief Method get_environmentNameIdx addr 0x21ef260 size 0x8 virtual false final false
 int32_t get_environmentNameIdx() ;

// Ctor Parameters [CppParam { name: "difficultyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficultyRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatmapFilename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapColorSchemeIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "environmentNameIdx", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx) ;

/// @brief Method .ctor addr 0x21ef18c size 0x68 virtual false final false
 void _ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VersionCheck
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4442))
// CS Name: StandardLevelInfoSaveData::VersionCheck
class CORDL_TYPE ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck(____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck(____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck& operator=(____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck&& o) noexcept = default;
  constexpr ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck& operator=(____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;


// Properties

 ::StringW __declspec(property(get=get_version))  version;


// Methods

/// @brief Method get_version addr 0x21ef268 size 0x8 virtual false final false
 ::StringW get_version() ;

// Ctor Parameters []
explicit ____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck() ;

/// @brief Method .ctor addr 0x21ef270 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelInfoSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4443))
// CS Name: StandardLevelInfoSaveData
class CORDL_TYPE StandardLevelInfoSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VersionCheck = ::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck;

using DifficultyBeatmap = ::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap;

using DifficultyBeatmapSet = ::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~StandardLevelInfoSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData", modifiers: " const&", def_value: None }]
constexpr StandardLevelInfoSaveData(StandardLevelInfoSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData", modifiers: "&&", def_value: None }]
constexpr StandardLevelInfoSaveData(StandardLevelInfoSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelInfoSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardLevelInfoSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelInfoSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelInfoSaveData& operator=(StandardLevelInfoSaveData&& o) noexcept = default;
  constexpr StandardLevelInfoSaveData& operator=(StandardLevelInfoSaveData const& o) noexcept = default;
                


// Fields

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"2.1.0"};

/// @brief Field kDefaultBeatmapCharacteristicName offset 0
static constexpr ::ConstString  kDefaultBeatmapCharacteristicName{u"Standard"};

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;

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

 ::StringW __declspec(property(get=__get__songFilename, put=__set__songFilename))  _songFilename;

constexpr void __set__songFilename(::StringW value) ;

constexpr ::StringW __get__songFilename() const;

 ::StringW __declspec(property(get=__get__coverImageFilename, put=__set__coverImageFilename))  _coverImageFilename;

constexpr void __set__coverImageFilename(::StringW value) ;

constexpr ::StringW __get__coverImageFilename() const;

 ::StringW __declspec(property(get=__get__environmentName, put=__set__environmentName))  _environmentName;

constexpr void __set__environmentName(::StringW value) ;

constexpr ::StringW __get__environmentName() const;

 ::StringW __declspec(property(get=__get__allDirectionsEnvironmentName, put=__set__allDirectionsEnvironmentName))  _allDirectionsEnvironmentName;

constexpr void __set__allDirectionsEnvironmentName(::StringW value) ;

constexpr ::StringW __get__allDirectionsEnvironmentName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__environmentNames, put=__set__environmentNames))  _environmentNames;

constexpr void __set__environmentNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__environmentNames() const;

 ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> __declspec(property(get=__get__colorSchemes, put=__set__colorSchemes))  _colorSchemes;

constexpr void __set__colorSchemes(::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> __get__colorSchemes() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets))  _difficultyBeatmapSets;

constexpr void __set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> __get__difficultyBeatmapSets() const;


// Properties

 ::StringW __declspec(property(get=get_version))  version;

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

 ::StringW __declspec(property(get=get_songFilename))  songFilename;

 ::StringW __declspec(property(get=get_coverImageFilename))  coverImageFilename;

 ::StringW __declspec(property(get=get_environmentName))  environmentName;

 ::StringW __declspec(property(get=get_allDirectionsEnvironmentName))  allDirectionsEnvironmentName;

 ::ArrayW<::StringW> __declspec(property(get=get_environmentNames))  environmentNames;

 ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> __declspec(property(get=get_colorSchemes))  colorSchemes;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;

 bool __declspec(property(get=get_hasAllData))  hasAllData;


// Methods

/// @brief Method get_version addr 0x21eea08 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method get_songName addr 0x21eea10 size 0x8 virtual false final false
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21eea18 size 0x8 virtual false final false
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21eea20 size 0x8 virtual false final false
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21eea28 size 0x8 virtual false final false
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21eea30 size 0x8 virtual false final false
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21eea38 size 0x8 virtual false final false
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x21eea40 size 0x8 virtual false final false
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21eea48 size 0x8 virtual false final false
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21eea50 size 0x8 virtual false final false
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21eea58 size 0x8 virtual false final false
 float_t get_previewDuration() ;

/// @brief Method get_songFilename addr 0x21eea60 size 0x8 virtual false final false
 ::StringW get_songFilename() ;

/// @brief Method get_coverImageFilename addr 0x21eea68 size 0x8 virtual false final false
 ::StringW get_coverImageFilename() ;

/// @brief Method get_environmentName addr 0x21eea70 size 0x8 virtual false final false
 ::StringW get_environmentName() ;

/// @brief Method get_allDirectionsEnvironmentName addr 0x21eea78 size 0x8 virtual false final false
 ::StringW get_allDirectionsEnvironmentName() ;

/// @brief Method get_environmentNames addr 0x21eea80 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_environmentNames() ;

/// @brief Method get_colorSchemes addr 0x21eea88 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> get_colorSchemes() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21eea90 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters [CppParam { name: "songName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "songSubName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "songAuthorName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelAuthorName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songTimeOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shuffle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shufflePeriod", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previewStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previewDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songFilename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "coverImageFilename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "environmentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "allDirectionsEnvironmentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "environmentNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "colorSchemes", ty: "::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData>", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmapSets", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet>", modifiers: "", def_value: None }]
explicit StandardLevelInfoSaveData(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName, ::ArrayW<::StringW> environmentNames, ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> colorSchemes, ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> difficultyBeatmapSets) ;

/// @brief Method .ctor addr 0x21eea98 size 0xf8 virtual false final false
 void _ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName, ::ArrayW<::StringW> environmentNames, ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData> colorSchemes, ::ArrayW<::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet> difficultyBeatmapSets) ;

/// @brief Method get_hasAllData addr 0x21eeb90 size 0x5c virtual false final false
 bool get_hasAllData() ;

/// @brief Method SetSongFilename addr 0x21eebec size 0x8 virtual false final false
 void SetSongFilename(::StringW songFilename) ;

/// @brief Method SerializeToJSONString addr 0x21eebf4 size 0x8 virtual false final false
 ::StringW SerializeToJSONString() ;

/// @brief Method DeserializeFromJSONString addr 0x21eebfc size 0x590 virtual false final false
static ::GlobalNamespace::StandardLevelInfoSaveData DeserializeFromJSONString(::StringW stringData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData, "", "StandardLevelInfoSaveData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmap, "", "StandardLevelInfoSaveData/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__DifficultyBeatmapSet, "", "StandardLevelInfoSaveData/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StandardLevelInfoSaveData__VersionCheck, "", "StandardLevelInfoSaveData/VersionCheck");
