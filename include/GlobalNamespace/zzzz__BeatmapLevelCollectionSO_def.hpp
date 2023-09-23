#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
// Type: ::BeatmapLevelCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4362))
// CS Name: BeatmapLevelCollectionSO
class CORDL_TYPE BeatmapLevelCollectionSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelCollection
constexpr operator  GlobalNamespace::IBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapLevelCollectionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelCollectionSO(BeatmapLevelCollectionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollectionSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelCollectionSO(BeatmapLevelCollectionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelCollectionSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelCollectionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelCollectionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelCollectionSO& operator=(BeatmapLevelCollectionSO&& o) noexcept = default;
  constexpr BeatmapLevelCollectionSO& operator=(BeatmapLevelCollectionSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=__get__beatmapLevels, put=__set__beatmapLevels))  _beatmapLevels;

constexpr void __set__beatmapLevels(::ArrayW<GlobalNamespace::BeatmapLevelSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapLevelSO> __get__beatmapLevels() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_beatmapLevels))  beatmapLevels;


// Methods

/// @brief Method get_beatmapLevels addr 0x21e331c size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> get_beatmapLevels() ;

// Ctor Parameters []
explicit BeatmapLevelCollectionSO() ;

/// @brief Method .ctor addr 0x21e3324 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelCollectionSO, "", "BeatmapLevelCollectionSO");
