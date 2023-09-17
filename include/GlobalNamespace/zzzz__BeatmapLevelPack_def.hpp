#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPack;
}
// Type: ::BeatmapLevelPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4371))
// CS Name: BeatmapLevelPack
class CORDL_TYPE BeatmapLevelPack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelPack
constexpr operator  ::GlobalNamespace::IBeatmapLevelPack() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IAnnotatedBeatmapLevelCollection
constexpr operator  ::GlobalNamespace::IAnnotatedBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapLevelPack() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelPack(BeatmapLevelPack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPack", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelPack(BeatmapLevelPack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelPack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelPack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelPack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelPack& operator=(BeatmapLevelPack&& o) noexcept = default;
  constexpr BeatmapLevelPack& operator=(BeatmapLevelPack const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelPackID, put=__set__levelPackID))  _levelPackID;

constexpr void __set__levelPackID(::StringW value) ;

constexpr ::StringW __get__levelPackID() const;

 ::StringW __declspec(property(get=__get__packName, put=__set__packName))  _packName;

constexpr void __set__packName(::StringW value) ;

constexpr ::StringW __get__packName() const;

 ::StringW __declspec(property(get=__get__shortPackName, put=__set__shortPackName))  _shortPackName;

constexpr void __set__shortPackName(::StringW value) ;

constexpr ::StringW __get__shortPackName() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__coverImage() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__smallCoverImage, put=__set__smallCoverImage))  _smallCoverImage;

constexpr void __set__smallCoverImage(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__smallCoverImage() const;

 ::GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=__get__beatmapLevelCollection, put=__set__beatmapLevelCollection))  _beatmapLevelCollection;

constexpr void __set__beatmapLevelCollection(::GlobalNamespace::IBeatmapLevelCollection value) ;

constexpr ::GlobalNamespace::IBeatmapLevelCollection __get__beatmapLevelCollection() const;


// Properties

 ::StringW __declspec(property(get=get_packID))  packID;

 ::StringW __declspec(property(get=get_packName))  packName;

 ::StringW __declspec(property(get=get_shortPackName))  shortPackName;

 ::StringW __declspec(property(get=get_collectionName))  collectionName;

 ::UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 ::UnityEngine::Sprite __declspec(property(get=get_smallCoverImage))  smallCoverImage;

 ::GlobalNamespace::IBeatmapLevelCollection __declspec(property(get=get_beatmapLevelCollection))  beatmapLevelCollection;


// Methods

/// @brief Method get_packID addr 0x21e4de8 size 0x8 virtual true final true
 ::StringW get_packID() ;

/// @brief Method get_packName addr 0x21e4df0 size 0x8 virtual true final true
 ::StringW get_packName() ;

/// @brief Method get_shortPackName addr 0x21e4df8 size 0x8 virtual true final true
 ::StringW get_shortPackName() ;

/// @brief Method get_collectionName addr 0x21e4e00 size 0x8 virtual true final true
 ::StringW get_collectionName() ;

/// @brief Method get_coverImage addr 0x21e4e08 size 0x8 virtual true final true
 ::UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_smallCoverImage addr 0x21e4e10 size 0x8 virtual true final true
 ::UnityEngine::Sprite get_smallCoverImage() ;

/// @brief Method get_beatmapLevelCollection addr 0x21e4e18 size 0x8 virtual true final true
 ::GlobalNamespace::IBeatmapLevelCollection get_beatmapLevelCollection() ;

// Ctor Parameters [CppParam { name: "levelPackID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "packName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "shortPackName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "coverImage", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "smallCoverImage", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "levelCollection", ty: "::GlobalNamespace::IBeatmapLevelCollection", modifiers: "", def_value: None }]
explicit BeatmapLevelPack(::StringW levelPackID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite coverImage, ::UnityEngine::Sprite smallCoverImage, ::GlobalNamespace::IBeatmapLevelCollection levelCollection) ;

/// @brief Method .ctor addr 0x21e4e20 size 0x54 virtual false final false
 void _ctor(::StringW levelPackID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite coverImage, ::UnityEngine::Sprite smallCoverImage, ::GlobalNamespace::IBeatmapLevelCollection levelCollection) ;

/// @brief Method CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering addr 0x21e4e74 size 0x2fc virtual false final false
static ::GlobalNamespace::BeatmapLevelPack CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPack, "", "BeatmapLevelPack");
