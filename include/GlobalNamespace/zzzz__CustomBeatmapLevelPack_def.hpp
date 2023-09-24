#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class CustomBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevelPack;
}
// Type: ::CustomBeatmapLevelPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4396))
// CS Name: CustomBeatmapLevelPack
class CORDL_TYPE CustomBeatmapLevelPack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPack
constexpr operator  GlobalNamespace::IBeatmapLevelPack() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CustomBeatmapLevelPack() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelPack", modifiers: " const&", def_value: None }]
constexpr CustomBeatmapLevelPack(CustomBeatmapLevelPack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelPack", modifiers: "&&", def_value: None }]
constexpr CustomBeatmapLevelPack(CustomBeatmapLevelPack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomBeatmapLevelPack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomBeatmapLevelPack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomBeatmapLevelPack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomBeatmapLevelPack& operator=(CustomBeatmapLevelPack&& o) noexcept = default;
  constexpr CustomBeatmapLevelPack& operator=(CustomBeatmapLevelPack const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__packID_k__BackingField, put=__set__packID_k__BackingField))  _packID_k__BackingField;

constexpr void __set__packID_k__BackingField(::StringW value) ;

constexpr ::StringW __get__packID_k__BackingField() const;

 ::StringW __declspec(property(get=__get__packName_k__BackingField, put=__set__packName_k__BackingField))  _packName_k__BackingField;

constexpr void __set__packName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__packName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__shortPackName_k__BackingField, put=__set__shortPackName_k__BackingField))  _shortPackName_k__BackingField;

constexpr void __set__shortPackName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__shortPackName_k__BackingField() const;

 UnityEngine::Sprite __declspec(property(get=__get__coverImage_k__BackingField, put=__set__coverImage_k__BackingField))  _coverImage_k__BackingField;

constexpr void __set__coverImage_k__BackingField(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__coverImage_k__BackingField() const;

 UnityEngine::Sprite __declspec(property(get=__get__smallCoverImage_k__BackingField, put=__set__smallCoverImage_k__BackingField))  _smallCoverImage_k__BackingField;

constexpr void __set__smallCoverImage_k__BackingField(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__smallCoverImage_k__BackingField() const;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=__get__beatmapLevelCollection_k__BackingField, put=__set__beatmapLevelCollection_k__BackingField))  _beatmapLevelCollection_k__BackingField;

constexpr void __set__beatmapLevelCollection_k__BackingField(GlobalNamespace::IBeatmapLevelCollection value) ;

constexpr GlobalNamespace::IBeatmapLevelCollection __get__beatmapLevelCollection_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_packID))  packID;

 ::StringW __declspec(property(get=get_packName))  packName;

 ::StringW __declspec(property(get=get_shortPackName))  shortPackName;

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection))  beatmapLevelCollection;

 bool __declspec(property(get=get_isPackAlwaysOwned))  isPackAlwaysOwned;


// Methods

/// @brief Method get_packID addr 0x21e9604 size 0x8 virtual true final true
 ::StringW get_packID() ;

/// @brief Method get_packName addr 0x21e960c size 0x8 virtual true final true
 ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x21e9614 size 0x8 virtual true final true
 ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x21e961c size 0x8 virtual true final true
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x21e9624 size 0x8 virtual true final true
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x21e962c size 0x8 virtual true final true
 UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x21e9634 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

/// @brief Method get_isPackAlwaysOwned addr 0x21e963c size 0x8 virtual false final false
 bool get_isPackAlwaysOwned() ;

static GlobalNamespace::CustomBeatmapLevelPack New_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, UnityEngine::Sprite coverImage, UnityEngine::Sprite smallCoverImage, GlobalNamespace::CustomBeatmapLevelCollection beatmapLevelCollection) ;

/// @brief Method .ctor addr 0x21e9644 size 0x54 virtual false final false
 void _ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, UnityEngine::Sprite coverImage, UnityEngine::Sprite smallCoverImage, GlobalNamespace::CustomBeatmapLevelCollection beatmapLevelCollection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomBeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelPack, "", "CustomBeatmapLevelPack");
