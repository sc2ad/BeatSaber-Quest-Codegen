#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Type: ::ILevelGameplaySetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4498))
// CS Name: ILevelGameplaySetupData
class CORDL_TYPE ILevelGameplaySetupData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILevelGameplaySetupData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILevelGameplaySetupData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::PreviewDifficultyBeatmap __declspec(property(get=get_beatmapLevel))  beatmapLevel;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;


// Methods

/// @brief Method get_beatmapLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PreviewDifficultyBeatmap get_beatmapLevel() ;

/// @brief Method get_gameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ILevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILevelGameplaySetupData, "", "ILevelGameplaySetupData");
