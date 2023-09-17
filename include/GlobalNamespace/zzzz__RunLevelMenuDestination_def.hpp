#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RunLevelMenuDestination;
}
// Type: ::RunLevelMenuDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4190))
// CS Name: RunLevelMenuDestination
class CORDL_TYPE RunLevelMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RunLevelMenuDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: " const&", def_value: None }]
constexpr RunLevelMenuDestination(RunLevelMenuDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: "&&", def_value: None }]
constexpr RunLevelMenuDestination(RunLevelMenuDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RunLevelMenuDestination(void* ptr) noexcept : ::GlobalNamespace::MenuDestination(ptr) {
}


  constexpr RunLevelMenuDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RunLevelMenuDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RunLevelMenuDestination& operator=(RunLevelMenuDestination&& o) noexcept = default;
  constexpr RunLevelMenuDestination& operator=(RunLevelMenuDestination const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_beatmapLevelPack, put=__set_beatmapLevelPack))  beatmapLevelPack;

constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack __get_beatmapLevelPack() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;

 bool __declspec(property(get=__get_practice, put=__set_practice))  practice;

constexpr void __set_practice(bool value) ;

constexpr bool __get_practice() const;

 float_t __declspec(property(get=__get_startSongTime, put=__set_startSongTime))  startSongTime;

constexpr void __set_startSongTime(float_t value) ;

constexpr float_t __get_startSongTime() const;

 float_t __declspec(property(get=__get_songSpeedMultiplier, put=__set_songSpeedMultiplier))  songSpeedMultiplier;

constexpr void __set_songSpeedMultiplier(float_t value) ;

constexpr float_t __get_songSpeedMultiplier() const;

 bool __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments))  overrideEnvironments;

constexpr void __set_overrideEnvironments(bool value) ;

constexpr bool __get_overrideEnvironments() const;

 ::StringW __declspec(property(get=__get_environmentType, put=__set_environmentType))  environmentType;

constexpr void __set_environmentType(::StringW value) ;

constexpr ::StringW __get_environmentType() const;

 ::StringW __declspec(property(get=__get_environmentName, put=__set_environmentName))  environmentName;

constexpr void __set_environmentName(::StringW value) ;

constexpr ::StringW __get_environmentName() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapLevelPack", ty: "::GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "practice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startSongTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songSpeedMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overrideEnvironments", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "environmentName", ty: "::StringW", modifiers: "", def_value: None }]
explicit RunLevelMenuDestination(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName) ;

/// @brief Method .ctor addr 0x21bd498 size 0x84 virtual false final false
 void _ctor(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RunLevelMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunLevelMenuDestination, "", "RunLevelMenuDestination");
