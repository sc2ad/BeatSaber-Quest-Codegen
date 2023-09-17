#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
// Type: ::IBeatmapLevelPackCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4372))
// CS Name: IBeatmapLevelPackCollection
class CORDL_TYPE IBeatmapLevelPackCollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapLevelPackCollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapLevelPackCollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=get_beatmapLevelPacks))  beatmapLevelPacks;


// Methods

/// @brief Method get_beatmapLevelPacks addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::GlobalNamespace::IBeatmapLevelPack> get_beatmapLevelPacks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelPackCollection, "", "IBeatmapLevelPackCollection");
