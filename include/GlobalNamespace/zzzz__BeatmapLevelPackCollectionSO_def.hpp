#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
// Type: ::BeatmapLevelPackCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4375))
// CS Name: BeatmapLevelPackCollectionSO
class CORDL_TYPE BeatmapLevelPackCollectionSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPackCollection
constexpr operator  GlobalNamespace::IBeatmapLevelPackCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapLevelPackCollectionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelPackCollectionSO(BeatmapLevelPackCollectionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelPackCollectionSO(BeatmapLevelPackCollectionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelPackCollectionSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelPackCollectionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelPackCollectionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelPackCollectionSO& operator=(BeatmapLevelPackCollectionSO&& o) noexcept = default;
  constexpr BeatmapLevelPackCollectionSO& operator=(BeatmapLevelPackCollectionSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks))  _beatmapLevelPacks;

constexpr void __set__beatmapLevelPacks(::ArrayW<GlobalNamespace::BeatmapLevelPackSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> __get__beatmapLevelPacks() const;

 ::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> __declspec(property(get=__get__previewBeatmapLevelPack, put=__set__previewBeatmapLevelPack))  _previewBeatmapLevelPack;

constexpr void __set__previewBeatmapLevelPack(::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> value) ;

constexpr ::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> __get__previewBeatmapLevelPack() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__allBeatmapLevelPacks, put=__set__allBeatmapLevelPacks))  _allBeatmapLevelPacks;

constexpr void __set__allBeatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get__allBeatmapLevelPacks() const;


// Properties

 ::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> __declspec(property(get=get_previewBeatmapLevelPack, put=set_previewBeatmapLevelPack))  previewBeatmapLevelPack;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=get_beatmapLevelPacks, put=set_beatmapLevelPacks))  beatmapLevelPacks;


// Methods

/// @brief Method get_previewBeatmapLevelPack addr 0x21e51b0 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> get_previewBeatmapLevelPack() ;

/// @brief Method set_previewBeatmapLevelPack addr 0x21e51b8 size 0x8 virtual false final false
 void set_previewBeatmapLevelPack(::ArrayW<GlobalNamespace::PreviewBeatmapLevelPackSO> value) ;

/// @brief Method get_beatmapLevelPacks addr 0x21e51c0 size 0x24 virtual true final true
 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> get_beatmapLevelPacks() ;

/// @brief Method set_beatmapLevelPacks addr 0x21e53c8 size 0x8 virtual false final false
 void set_beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method LoadAllBeatmapLevelPacks addr 0x21e51e4 size 0x1e4 virtual false final false
 void LoadAllBeatmapLevelPacks() ;

// Ctor Parameters []
explicit BeatmapLevelPackCollectionSO() ;

/// @brief Method .ctor addr 0x21e53d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelPackCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollectionSO, "", "BeatmapLevelPackCollectionSO");
