#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelCollection;
}
// Type: ::BeatmapLevelCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4361))
// CS Name: BeatmapLevelCollection
class CORDL_TYPE BeatmapLevelCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelCollection
constexpr operator  ::GlobalNamespace::IBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapLevelCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelCollection(BeatmapLevelCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelCollection", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelCollection(BeatmapLevelCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelCollection& operator=(BeatmapLevelCollection&& o) noexcept = default;
  constexpr BeatmapLevelCollection& operator=(BeatmapLevelCollection const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get__levels, put=__set__levels))  _levels;

constexpr void __set__levels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> __get__levels() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_beatmapLevels))  beatmapLevels;


// Methods

/// @brief Method get_beatmapLevels addr 0x21e2b20 size 0x8 virtual true final true
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> get_beatmapLevels() ;

// Ctor Parameters [CppParam { name: "levels", ty: "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: None }]
explicit BeatmapLevelCollection(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> levels) ;

/// @brief Method .ctor addr 0x21e2b28 size 0x28 virtual false final false
 void _ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> levels) ;

/// @brief Method CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering addr 0x21e2b50 size 0x7cc virtual false final false
static ::GlobalNamespace::BeatmapLevelCollection CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollection, "", "BeatmapLevelCollection");
