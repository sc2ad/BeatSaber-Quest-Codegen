#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
// Type: ::BeatmapLevelPackSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4376))
// CS Name: BeatmapLevelPackSO
class CORDL_TYPE BeatmapLevelPackSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPack
constexpr operator  GlobalNamespace::IBeatmapLevelPack() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BeatmapLevelPackSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelPackSO(BeatmapLevelPackSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelPackSO(BeatmapLevelPackSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelPackSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelPackSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelPackSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelPackSO& operator=(BeatmapLevelPackSO&& o) noexcept = default;
  constexpr BeatmapLevelPackSO& operator=(BeatmapLevelPackSO const& o) noexcept = default;
                


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

 GlobalNamespace::BeatmapLevelCollectionSO __declspec(property(get=__get__beatmapLevelCollection, put=__set__beatmapLevelCollection))  _beatmapLevelCollection;

constexpr void __set__beatmapLevelCollection(GlobalNamespace::BeatmapLevelCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelCollectionSO __get__beatmapLevelCollection() const;


// Properties

 ::StringW __declspec(property(get=get_packID))  packID;

 ::StringW __declspec(property(get=get_packName))  packName;

 ::StringW __declspec(property(get=get_shortPackName))  shortPackName;

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection))  beatmapLevelCollection;


// Methods

/// @brief Method get_packID addr 0x21e53d8 size 0x8 virtual true final true
 ::StringW get_packID() ;

/// @brief Method get_packName addr 0x21e53e0 size 0x8 virtual true final true
 ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x21e53e8 size 0x8 virtual true final true
 ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x21e53f0 size 0x8 virtual true final true
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x21e53f8 size 0x8 virtual true final true
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x21e5400 size 0x8 virtual true final true
 UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x21e5408 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

static GlobalNamespace::BeatmapLevelPackSO New_ctor() ;

/// @brief Method .ctor addr 0x21e5410 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelPackSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackSO, "", "BeatmapLevelPackSO");
