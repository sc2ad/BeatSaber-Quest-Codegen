#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Type: ::IBeatmapLevelCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4360))
// CS Name: IBeatmapLevelCollection
class CORDL_TYPE IBeatmapLevelCollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapLevelCollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapLevelCollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_beatmapLevels))  beatmapLevels;


// Methods

/// @brief Method get_beatmapLevels addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> get_beatmapLevels() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapLevelCollection, "", "IBeatmapLevelCollection");
