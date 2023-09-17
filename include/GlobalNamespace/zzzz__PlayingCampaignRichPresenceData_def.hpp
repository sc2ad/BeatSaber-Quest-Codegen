#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
// Type: ::PlayingCampaignRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4791))
// CS Name: PlayingCampaignRichPresenceData
class CORDL_TYPE PlayingCampaignRichPresenceData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IRichPresenceData
constexpr operator  ::GlobalNamespace::IRichPresenceData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PlayingCampaignRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: " const&", def_value: None }]
constexpr PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: "&&", def_value: None }]
constexpr PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayingCampaignRichPresenceData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayingCampaignRichPresenceData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayingCampaignRichPresenceData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayingCampaignRichPresenceData& operator=(PlayingCampaignRichPresenceData&& o) noexcept = default;
  constexpr PlayingCampaignRichPresenceData& operator=(PlayingCampaignRichPresenceData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__localizedDescription_k__BackingField, put=__set__localizedDescription_k__BackingField))  _localizedDescription_k__BackingField;

constexpr void __set__localizedDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__localizedDescription_k__BackingField() const;

/// @brief Field kPlayingCampaignRichPresenceLocalizationKey offset 0
static constexpr ::ConstString  kPlayingCampaignRichPresenceLocalizationKey{u"PLAYING_CAMPAIGN_PRESENCE"};


// Properties

 ::StringW __declspec(property(get=get_apiName))  apiName;

 ::StringW __declspec(property(get=get_localizedDescription, put=set_localizedDescription))  localizedDescription;


// Methods

/// @brief Method get_apiName addr 0x222a390 size 0x40 virtual true final true
 ::StringW get_apiName() ;

/// @brief Method get_localizedDescription addr 0x222a3d0 size 0x8 virtual true final true
 ::StringW get_localizedDescription() ;

/// @brief Method set_localizedDescription addr 0x222a3d8 size 0x8 virtual false final false
 void set_localizedDescription(::StringW value) ;

// Ctor Parameters []
explicit PlayingCampaignRichPresenceData() ;

/// @brief Method .ctor addr 0x222a3e0 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayingCampaignRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingCampaignRichPresenceData, "", "PlayingCampaignRichPresenceData");
