#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Type: ::IAnnotatedBeatmapLevelCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4438))
// CS Name: IAnnotatedBeatmapLevelCollection
class CORDL_TYPE IAnnotatedBeatmapLevelCollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAnnotatedBeatmapLevelCollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnnotatedBeatmapLevelCollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection))  beatmapLevelCollection;


// Methods

/// @brief Method get_collectionName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IAnnotatedBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAnnotatedBeatmapLevelCollection, "", "IAnnotatedBeatmapLevelCollection");
