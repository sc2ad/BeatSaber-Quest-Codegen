#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingDifficultyBeatmapRichPresenceData;
}
// Type: ::PlayingDifficultyBeatmapRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4793))
// CS Name: PlayingDifficultyBeatmapRichPresenceData
class CORDL_TYPE PlayingDifficultyBeatmapRichPresenceData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IRichPresenceData
constexpr operator  GlobalNamespace::IRichPresenceData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayingDifficultyBeatmapRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: " const&", def_value: None }]
constexpr PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingDifficultyBeatmapRichPresenceData", modifiers: "&&", def_value: None }]
constexpr PlayingDifficultyBeatmapRichPresenceData(PlayingDifficultyBeatmapRichPresenceData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayingDifficultyBeatmapRichPresenceData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayingDifficultyBeatmapRichPresenceData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayingDifficultyBeatmapRichPresenceData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayingDifficultyBeatmapRichPresenceData& operator=(PlayingDifficultyBeatmapRichPresenceData&& o) noexcept = default;
  constexpr PlayingDifficultyBeatmapRichPresenceData& operator=(PlayingDifficultyBeatmapRichPresenceData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__apiName_k__BackingField, put=__set__apiName_k__BackingField))  _apiName_k__BackingField;

constexpr void __set__apiName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__apiName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__localizedDescription_k__BackingField, put=__set__localizedDescription_k__BackingField))  _localizedDescription_k__BackingField;

constexpr void __set__localizedDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__localizedDescription_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_apiName, put=set_apiName))  apiName;

 ::StringW __declspec(property(get=get_localizedDescription, put=set_localizedDescription))  localizedDescription;


// Methods

/// @brief Method get_apiName addr 0x222a4e8 size 0x8 virtual true final true
 ::StringW get_apiName() ;

/// @brief Method set_apiName addr 0x222a4f0 size 0x8 virtual false final false
 void set_apiName(::StringW value) ;

/// @brief Method get_localizedDescription addr 0x222a4f8 size 0x8 virtual true final true
 ::StringW get_localizedDescription() ;

/// @brief Method set_localizedDescription addr 0x222a500 size 0x8 virtual false final false
 void set_localizedDescription(::StringW value) ;

static GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData New_ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method .ctor addr 0x222a508 size 0x40 virtual false final false
 void _ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method GetDestinationLocalizedString addr 0x222a548 size 0x46c virtual false final false
static ::StringW GetDestinationLocalizedString(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData, "", "PlayingDifficultyBeatmapRichPresenceData");
