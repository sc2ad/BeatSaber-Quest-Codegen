#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyBeatmapLineData;
}
// Type: ::IReadonlyBeatmapLineData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14930))
// CS Name: IReadonlyBeatmapLineData
class CORDL_TYPE IReadonlyBeatmapLineData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReadonlyBeatmapLineData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReadonlyBeatmapLineData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> __declspec(property(get=get_beatmapObjectsData))  beatmapObjectsData;


// Methods

/// @brief Method get_beatmapObjectsData addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> get_beatmapObjectsData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IReadonlyBeatmapLineData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IReadonlyBeatmapLineData, "", "IReadonlyBeatmapLineData");
