#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Type: ::IBeatmapLevelPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4370))
// CS Name: IBeatmapLevelPack
class CORDL_TYPE IBeatmapLevelPack : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  ::GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

~IBeatmapLevelPack() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapLevelPack(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_packID))  packID;

 ::StringW __declspec(property(get=get_packName))  packName;

 ::StringW __declspec(property(get=get_shortPackName))  shortPackName;


// Methods

/// @brief Method get_packID addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_packID() ;

/// @brief Method get_packName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_shortPackName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelPack, "", "IBeatmapLevelPack");
