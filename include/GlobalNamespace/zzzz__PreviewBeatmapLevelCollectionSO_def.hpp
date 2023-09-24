#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewBeatmapLevelCollectionSO;
}
// Type: ::PreviewBeatmapLevelCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4421))
// CS Name: PreviewBeatmapLevelCollectionSO
class CORDL_TYPE PreviewBeatmapLevelCollectionSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelCollection
constexpr operator  GlobalNamespace::IBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PreviewBeatmapLevelCollectionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelCollectionSO", modifiers: " const&", def_value: None }]
constexpr PreviewBeatmapLevelCollectionSO(PreviewBeatmapLevelCollectionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelCollectionSO", modifiers: "&&", def_value: None }]
constexpr PreviewBeatmapLevelCollectionSO(PreviewBeatmapLevelCollectionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreviewBeatmapLevelCollectionSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PreviewBeatmapLevelCollectionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreviewBeatmapLevelCollectionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreviewBeatmapLevelCollectionSO& operator=(PreviewBeatmapLevelCollectionSO&& o) noexcept = default;
  constexpr PreviewBeatmapLevelCollectionSO& operator=(PreviewBeatmapLevelCollectionSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::PreviewBeatmapLevelSO> __declspec(property(get=__get__beatmapLevels, put=__set__beatmapLevels))  _beatmapLevels;

constexpr void __set__beatmapLevels(::ArrayW<GlobalNamespace::PreviewBeatmapLevelSO> value) ;

constexpr ::ArrayW<GlobalNamespace::PreviewBeatmapLevelSO> __get__beatmapLevels() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_beatmapLevels))  beatmapLevels;


// Methods

/// @brief Method get_beatmapLevels addr 0x21ec6e0 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> get_beatmapLevels() ;

static GlobalNamespace::PreviewBeatmapLevelCollectionSO New_ctor() ;

/// @brief Method .ctor addr 0x21ec6e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PreviewBeatmapLevelCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelCollectionSO, "", "PreviewBeatmapLevelCollectionSO");
