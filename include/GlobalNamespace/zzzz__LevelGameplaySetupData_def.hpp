#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
// Type: ::LevelGameplaySetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4507))
// CS Name: LevelGameplaySetupData
class CORDL_TYPE LevelGameplaySetupData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILevelGameplaySetupData
constexpr operator  GlobalNamespace::ILevelGameplaySetupData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LevelGameplaySetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: " const&", def_value: None }]
constexpr LevelGameplaySetupData(LevelGameplaySetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "&&", def_value: None }]
constexpr LevelGameplaySetupData(LevelGameplaySetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelGameplaySetupData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelGameplaySetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelGameplaySetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelGameplaySetupData& operator=(LevelGameplaySetupData&& o) noexcept = default;
  constexpr LevelGameplaySetupData& operator=(LevelGameplaySetupData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PreviewDifficultyBeatmap __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(GlobalNamespace::PreviewDifficultyBeatmap value) ;

constexpr GlobalNamespace::PreviewDifficultyBeatmap __get__beatmapLevel() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;


// Properties

 GlobalNamespace::PreviewDifficultyBeatmap __declspec(property(get=get_beatmapLevel))  beatmapLevel;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;


// Methods

/// @brief Method get_beatmapLevel addr 0x21f3158 size 0x8 virtual true final true
 GlobalNamespace::PreviewDifficultyBeatmap get_beatmapLevel() ;

/// @brief Method get_gameplayModifiers addr 0x21f3160 size 0x8 virtual true final true
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

// Ctor Parameters []
explicit LevelGameplaySetupData() ;

/// @brief Method .ctor addr 0x21f3168 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "GlobalNamespace::PreviewDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }]
explicit LevelGameplaySetupData(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method .ctor addr 0x21f31d0 size 0xa4 virtual false final false
 void _ctor(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method ClearGameplaySetupData addr 0x21f3274 size 0x64 virtual false final false
 void ClearGameplaySetupData() ;

/// @brief Method SetBeatmapLevel addr 0x21f32d8 size 0x8 virtual false final false
 void SetBeatmapLevel(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method SetGameplayModifiers addr 0x21f32e0 size 0x78 virtual false final false
 void SetGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelGameplaySetupData, "", "LevelGameplaySetupData");
