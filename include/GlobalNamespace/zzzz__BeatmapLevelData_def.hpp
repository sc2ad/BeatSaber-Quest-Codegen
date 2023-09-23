#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelData;
}
// Type: ::BeatmapLevelData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4363))
// CS Name: BeatmapLevelData
class CORDL_TYPE BeatmapLevelData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelData
constexpr operator  GlobalNamespace::IBeatmapLevelData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapLevelData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelData(BeatmapLevelData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelData(BeatmapLevelData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelData& operator=(BeatmapLevelData&& o) noexcept = default;
  constexpr BeatmapLevelData& operator=(BeatmapLevelData const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__audioClip() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets))  _difficultyBeatmapSets;

constexpr void __set__difficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __get__difficultyBeatmapSets() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;


// Methods

/// @brief Method get_audioClip addr 0x21e332c size 0x8 virtual true final true
 UnityEngine::AudioClip get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21e3334 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters [CppParam { name: "audioClip", ty: "UnityEngine::AudioClip", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmapSets", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet>", modifiers: "", def_value: None }]
explicit BeatmapLevelData(UnityEngine::AudioClip audioClip, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> difficultyBeatmapSets) ;

/// @brief Method .ctor addr 0x21e333c size 0x2c virtual false final false
 void _ctor(UnityEngine::AudioClip audioClip, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> difficultyBeatmapSets) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelData, "", "BeatmapLevelData");
