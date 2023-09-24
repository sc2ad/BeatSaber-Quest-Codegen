#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Type: ::IDifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4414))
// CS Name: IDifficultyBeatmap
class CORDL_TYPE IDifficultyBeatmap : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDifficultyBeatmap(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::IBeatmapLevel __declspec(property(get=get_level))  level;

 GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=get_parentDifficultyBeatmapSet))  parentDifficultyBeatmapSet;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 int32_t __declspec(property(get=get_environmentNameIdx))  environmentNameIdx;


// Methods

/// @brief Method get_level addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IBeatmapLevel get_level() ;

/// @brief Method get_parentDifficultyBeatmapSet addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IDifficultyBeatmapSet get_parentDifficultyBeatmapSet() ;

/// @brief Method get_difficulty addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_difficultyRank() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_environmentNameIdx addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_environmentNameIdx() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetBeatmapDataAsync(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDifficultyBeatmap, "", "IDifficultyBeatmap");
