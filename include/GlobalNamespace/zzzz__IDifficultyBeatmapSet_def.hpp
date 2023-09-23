#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
// Type: ::IDifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4416))
// CS Name: IDifficultyBeatmapSet
class CORDL_TYPE IDifficultyBeatmapSet : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDifficultyBeatmapSet(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> get_difficultyBeatmaps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDifficultyBeatmapSet, "", "IDifficultyBeatmapSet");
