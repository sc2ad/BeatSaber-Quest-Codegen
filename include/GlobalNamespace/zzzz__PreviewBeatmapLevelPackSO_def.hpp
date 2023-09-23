#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelCollectionSO;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
// Type: ::PreviewBeatmapLevelPackSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4422))
// CS Name: PreviewBeatmapLevelPackSO
class CORDL_TYPE PreviewBeatmapLevelPackSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPack
constexpr operator  GlobalNamespace::IBeatmapLevelPack() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PreviewBeatmapLevelPackSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelPackSO", modifiers: " const&", def_value: None }]
constexpr PreviewBeatmapLevelPackSO(PreviewBeatmapLevelPackSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelPackSO", modifiers: "&&", def_value: None }]
constexpr PreviewBeatmapLevelPackSO(PreviewBeatmapLevelPackSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewBeatmapLevelPackSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PreviewBeatmapLevelPackSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewBeatmapLevelPackSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewBeatmapLevelPackSO& operator=(PreviewBeatmapLevelPackSO&& o) noexcept = default;
  constexpr PreviewBeatmapLevelPackSO& operator=(PreviewBeatmapLevelPackSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__packID, put=__set__packID))  _packID;

constexpr void __set__packID(::StringW value) ;

constexpr ::StringW __get__packID() const;

 ::StringW __declspec(property(get=__get__packName, put=__set__packName))  _packName;

constexpr void __set__packName(::StringW value) ;

constexpr ::StringW __get__packName() const;

 ::StringW __declspec(property(get=__get__shortPackName, put=__set__shortPackName))  _shortPackName;

constexpr void __set__shortPackName(::StringW value) ;

constexpr ::StringW __get__shortPackName() const;

 UnityEngine::Sprite __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__coverImage() const;

 UnityEngine::Sprite __declspec(property(get=__get__smallCoverImage, put=__set__smallCoverImage))  _smallCoverImage;

constexpr void __set__smallCoverImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__smallCoverImage() const;

 GlobalNamespace::PreviewBeatmapLevelCollectionSO __declspec(property(get=__get__previewBeatmapLevelCollection, put=__set__previewBeatmapLevelCollection))  _previewBeatmapLevelCollection;

constexpr void __set__previewBeatmapLevelCollection(GlobalNamespace::PreviewBeatmapLevelCollectionSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelCollectionSO __get__previewBeatmapLevelCollection() const;


// Properties

 ::StringW __declspec(property(get=get_packID))  packID;

 ::StringW __declspec(property(get=get_packName))  packName;

 ::StringW __declspec(property(get=get_shortPackName))  shortPackName;

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection))  beatmapLevelCollection;


// Methods

/// @brief Method get_packID addr 0x21ec6f0 size 0x8 virtual true final true
 ::StringW get_packID() ;

/// @brief Method get_packName addr 0x21ec6f8 size 0x8 virtual true final true
 ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x21ec700 size 0x8 virtual true final true
 ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x21ec708 size 0x8 virtual true final true
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x21ec710 size 0x8 virtual true final true
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x21ec718 size 0x8 virtual true final true
 UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x21ec720 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

// Ctor Parameters []
explicit PreviewBeatmapLevelPackSO() ;

/// @brief Method .ctor addr 0x21ec728 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PreviewBeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelPackSO, "", "PreviewBeatmapLevelPackSO");
