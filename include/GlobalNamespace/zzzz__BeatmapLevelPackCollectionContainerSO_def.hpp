#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollectionContainerSO;
}
// Type: ::BeatmapLevelPackCollectionContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4374))
// CS Name: BeatmapLevelPackCollectionContainerSO
class CORDL_TYPE BeatmapLevelPackCollectionContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapLevelPackCollectionContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionContainerSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelPackCollectionContainerSO(BeatmapLevelPackCollectionContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollectionContainerSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelPackCollectionContainerSO(BeatmapLevelPackCollectionContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelPackCollectionContainerSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelPackCollectionContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelPackCollectionContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelPackCollectionContainerSO& operator=(BeatmapLevelPackCollectionContainerSO&& o) noexcept = default;
  constexpr BeatmapLevelPackCollectionContainerSO& operator=(BeatmapLevelPackCollectionContainerSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__beatmapLevelPackCollection, put=__set__beatmapLevelPackCollection))  _beatmapLevelPackCollection;

constexpr void __set__beatmapLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO __get__beatmapLevelPackCollection() const;


// Properties

 ::GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=get_beatmapLevelPackCollection))  beatmapLevelPackCollection;


// Methods

/// @brief Method get_beatmapLevelPackCollection addr 0x21e51a0 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapLevelPackCollectionSO get_beatmapLevelPackCollection() ;

// Ctor Parameters []
explicit BeatmapLevelPackCollectionContainerSO() ;

/// @brief Method .ctor addr 0x21e51a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO, "", "BeatmapLevelPackCollectionContainerSO");
