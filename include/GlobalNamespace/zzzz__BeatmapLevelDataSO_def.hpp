#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet;
}
// Type: ::DifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4364))
// CS Name: BeatmapLevelDataSO::DifficultyBeatmapSet
class CORDL_TYPE ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet(____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet(____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet& operator=(____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet& operator=(____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__beatmapCharacteristicSerializedName, put=__set__beatmapCharacteristicSerializedName))  _beatmapCharacteristicSerializedName;

constexpr void __set__beatmapCharacteristicSerializedName(::StringW value) ;

constexpr ::StringW __get__beatmapCharacteristicSerializedName() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> __get__difficultyBeatmaps() const;


// Properties

 ::StringW __declspec(property(get=get_beatmapCharacteristicSerializedName))  beatmapCharacteristicSerializedName;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristicSerializedName addr 0x21e3380 size 0x8 virtual false final false
 ::StringW get_beatmapCharacteristicSerializedName() ;

/// @brief Method get_difficultyBeatmaps addr 0x21e3388 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "beatmapCharacteristicSerializedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmaps", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet(::StringW beatmapCharacteristicSerializedName, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method .ctor addr 0x21e3390 size 0x2c virtual false final false
 void _ctor(::StringW beatmapCharacteristicSerializedName, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4365))
// CS Name: BeatmapLevelDataSO
class CORDL_TYPE BeatmapLevelDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using DifficultyBeatmapSet = ::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapLevelDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelDataSO(BeatmapLevelDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelDataSO(BeatmapLevelDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelDataSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelDataSO& operator=(BeatmapLevelDataSO&& o) noexcept = default;
  constexpr BeatmapLevelDataSO& operator=(BeatmapLevelDataSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(::UnityEngine::AudioClip value) ;

constexpr ::UnityEngine::AudioClip __get__audioClip() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets))  _difficultyBeatmapSets;

constexpr void __set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> __get__difficultyBeatmapSets() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> __declspec(property(get=__get__no360MovementDifficultyBeatmapSets, put=__set__no360MovementDifficultyBeatmapSets))  _no360MovementDifficultyBeatmapSets;

constexpr void __set__no360MovementDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> __get__no360MovementDifficultyBeatmapSets() const;


// Properties

 ::UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;


// Methods

/// @brief Method get_audioClip addr 0x21e3368 size 0x8 virtual false final false
 ::UnityEngine::AudioClip get_audioClip() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21e3370 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet> get_difficultyBeatmapSets() ;

// Ctor Parameters []
explicit BeatmapLevelDataSO() ;

/// @brief Method .ctor addr 0x21e3378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataSO, "", "BeatmapLevelDataSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapLevelDataSO__DifficultyBeatmapSet, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
