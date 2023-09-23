#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataAssetsModel;
}
// Type: ::BeatmapDataAssetsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4343))
// CS Name: BeatmapDataAssetsModel
class CORDL_TYPE BeatmapDataAssetsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataAssetsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: " const&", def_value: None }]
constexpr BeatmapDataAssetsModel(BeatmapDataAssetsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAssetsModel", modifiers: "&&", def_value: None }]
constexpr BeatmapDataAssetsModel(BeatmapDataAssetsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataAssetsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataAssetsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataAssetsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataAssetsModel& operator=(BeatmapDataAssetsModel&& o) noexcept = default;
  constexpr BeatmapDataAssetsModel& operator=(BeatmapDataAssetsModel const& o) noexcept = default;
                


// Methods

/// @brief Method BeatmapLevelDataAssetNameForBeatmapLevel addr 0x21df24c size 0x4c virtual false final false
static ::StringW BeatmapLevelDataAssetNameForBeatmapLevel(::StringW levelID) ;

/// @brief Method AssetBundleNameForBeatmapLevel addr 0x21df298 size 0x14 virtual false final false
static ::StringW AssetBundleNameForBeatmapLevel(::StringW levelID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataAssetsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataAssetsModel, "", "BeatmapDataAssetsModel");
