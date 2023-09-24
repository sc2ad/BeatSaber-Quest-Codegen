#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck;
}
namespace GlobalNamespace {
class StandardLevelInfoSaveData_V100;
}
// Type: ::DifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4444))
// CS Name: StandardLevelInfoSaveData_V100::DifficultyBeatmap
class CORDL_TYPE GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap(GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap(GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap& operator=(GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap& operator=(GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap const& o) noexcept = default;
                


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

 int32_t __declspec(property(get=__get__noteJumpStartBeatOffset, put=__set__noteJumpStartBeatOffset))  _noteJumpStartBeatOffset;

constexpr void __set__noteJumpStartBeatOffset(int32_t value) ;

constexpr int32_t __get__noteJumpStartBeatOffset() const;


// Properties

 ::StringW __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 ::StringW __declspec(property(get=get_beatmapFilename))  beatmapFilename;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 int32_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;


// Methods

/// @brief Method get_difficulty addr 0x21ef5b8 size 0x8 virtual false final false
 ::StringW get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x21ef5c0 size 0x8 virtual false final false
 int32_t get_difficultyRank() ;

/// @brief Method get_beatmapFilename addr 0x21ef5c8 size 0x8 virtual false final false
 ::StringW get_beatmapFilename() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x21ef5d0 size 0x8 virtual false final false
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x21ef5d8 size 0x8 virtual false final false
 int32_t get_noteJumpStartBeatOffset() ;

static GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset) ;

/// @brief Method .ctor addr 0x21ef5e0 size 0x58 virtual false final false
 void _ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VersionCheck
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4445))
// CS Name: StandardLevelInfoSaveData_V100::VersionCheck
class CORDL_TYPE GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck(GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck(GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck& operator=(GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck& operator=(GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;


// Properties

 ::StringW __declspec(property(get=get_version))  version;


// Methods

/// @brief Method get_version addr 0x21ef638 size 0x8 virtual false final false
 ::StringW get_version() ;

static GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck New_ctor() ;

/// @brief Method .ctor addr 0x21ef640 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelInfoSaveData_V100
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4446))
// CS Name: StandardLevelInfoSaveData_V100
class CORDL_TYPE StandardLevelInfoSaveData_V100 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VersionCheck = GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck;

using DifficultyBeatmap = GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~StandardLevelInfoSaveData_V100() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: " const&", def_value: None }]
constexpr StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: "&&", def_value: None }]
constexpr StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelInfoSaveData_V100(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardLevelInfoSaveData_V100& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelInfoSaveData_V100& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelInfoSaveData_V100& operator=(StandardLevelInfoSaveData_V100&& o) noexcept = default;
  constexpr StandardLevelInfoSaveData_V100& operator=(StandardLevelInfoSaveData_V100 const& o) noexcept = default;
                


// Fields

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"1.0.0"};

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

 ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> __get__difficultyBeatmaps() const;


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

 ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;

 bool __declspec(property(get=get_hasAllData))  hasAllData;


// Methods

/// @brief Method get_version addr 0x21ef278 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method get_songName addr 0x21ef280 size 0x8 virtual false final false
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21ef288 size 0x8 virtual false final false
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21ef290 size 0x8 virtual false final false
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21ef298 size 0x8 virtual false final false
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21ef2a0 size 0x8 virtual false final false
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21ef2a8 size 0x8 virtual false final false
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x21ef2b0 size 0x8 virtual false final false
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21ef2b8 size 0x8 virtual false final false
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21ef2c0 size 0x8 virtual false final false
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21ef2c8 size 0x8 virtual false final false
 float_t get_previewDuration() ;

/// @brief Method get_songFilename addr 0x21ef2d0 size 0x8 virtual false final false
 ::StringW get_songFilename() ;

/// @brief Method get_coverImageFilename addr 0x21ef2d8 size 0x8 virtual false final false
 ::StringW get_coverImageFilename() ;

/// @brief Method get_environmentName addr 0x21ef2e0 size 0x8 virtual false final false
 ::StringW get_environmentName() ;

/// @brief Method get_difficultyBeatmaps addr 0x21ef2e8 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> get_difficultyBeatmaps() ;

static GlobalNamespace::StandardLevelInfoSaveData_V100 New_ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method .ctor addr 0x21ef2f0 size 0xdc virtual false final false
 void _ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::ArrayW<GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method get_hasAllData addr 0x21ef3cc size 0x64 virtual false final false
 bool get_hasAllData() ;

/// @brief Method SetSongFilename addr 0x21ef430 size 0x8 virtual false final false
 void SetSongFilename(::StringW songFilename) ;

/// @brief Method SerializeToJSONString addr 0x21ef438 size 0x8 virtual false final false
 ::StringW SerializeToJSONString() ;

/// @brief Method DeserializeFromJSONString addr 0x21ef440 size 0x178 virtual false final false
static GlobalNamespace::StandardLevelInfoSaveData DeserializeFromJSONString(::StringW stringData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__DifficultyBeatmap, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelInfoSaveData_V100__VersionCheck, "", "StandardLevelInfoSaveData_V100/VersionCheck");
NEED_NO_BOX(GlobalNamespace::StandardLevelInfoSaveData_V100);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData_V100, "", "StandardLevelInfoSaveData_V100");
