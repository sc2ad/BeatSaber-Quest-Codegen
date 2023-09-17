#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IMultiplayerRichPresenceData;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class InMultiplayerRichPresenceData;
}
// Type: ::InMultiplayerRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4785))
// CS Name: InMultiplayerRichPresenceData
class CORDL_TYPE InMultiplayerRichPresenceData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerRichPresenceData
constexpr operator  ::GlobalNamespace::IMultiplayerRichPresenceData() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IRichPresenceData
constexpr operator  ::GlobalNamespace::IRichPresenceData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~InMultiplayerRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "", ty: "InMultiplayerRichPresenceData", modifiers: " const&", def_value: None }]
constexpr InMultiplayerRichPresenceData(InMultiplayerRichPresenceData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InMultiplayerRichPresenceData", modifiers: "&&", def_value: None }]
constexpr InMultiplayerRichPresenceData(InMultiplayerRichPresenceData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InMultiplayerRichPresenceData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InMultiplayerRichPresenceData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InMultiplayerRichPresenceData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InMultiplayerRichPresenceData& operator=(InMultiplayerRichPresenceData&& o) noexcept = default;
  constexpr InMultiplayerRichPresenceData& operator=(InMultiplayerRichPresenceData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__apiName_k__BackingField, put=__set__apiName_k__BackingField))  _apiName_k__BackingField;

constexpr void __set__apiName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__apiName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__localizedDescription_k__BackingField, put=__set__localizedDescription_k__BackingField))  _localizedDescription_k__BackingField;

constexpr void __set__localizedDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__localizedDescription_k__BackingField() const;

 ::StringW __declspec(property(get=__get__multiplayerSecret_k__BackingField, put=__set__multiplayerSecret_k__BackingField))  _multiplayerSecret_k__BackingField;

constexpr void __set__multiplayerSecret_k__BackingField(::StringW value) ;

constexpr ::StringW __get__multiplayerSecret_k__BackingField() const;

 bool __declspec(property(get=__get__atMaxPartySize_k__BackingField, put=__set__atMaxPartySize_k__BackingField))  _atMaxPartySize_k__BackingField;

constexpr void __set__atMaxPartySize_k__BackingField(bool value) ;

constexpr bool __get__atMaxPartySize_k__BackingField() const;

 bool __declspec(property(get=__get__canInvite_k__BackingField, put=__set__canInvite_k__BackingField))  _canInvite_k__BackingField;

constexpr void __set__canInvite_k__BackingField(bool value) ;

constexpr bool __get__canInvite_k__BackingField() const;

/// @brief Field kInMultiplayerLobbyRichPresenceLocalizationKey offset 0
static constexpr ::ConstString  kInMultiplayerLobbyRichPresenceLocalizationKey{u"IN_MULTIPLAYER_LOBBY_PRESENCE"};


// Properties

 ::StringW __declspec(property(get=get_apiName, put=set_apiName))  apiName;

 ::StringW __declspec(property(get=get_localizedDescription, put=set_localizedDescription))  localizedDescription;

 ::StringW __declspec(property(get=get_multiplayerSecret, put=set_multiplayerSecret))  multiplayerSecret;

 bool __declspec(property(get=get_atMaxPartySize, put=set_atMaxPartySize))  atMaxPartySize;

 bool __declspec(property(get=get_canInvite, put=set_canInvite))  canInvite;

 bool __declspec(property(get=get_isJoinable))  isJoinable;


// Methods

/// @brief Method get_apiName addr 0x2229c18 size 0x8 virtual true final true
 ::StringW get_apiName() ;

/// @brief Method set_apiName addr 0x2229c20 size 0x8 virtual false final false
 void set_apiName(::StringW value) ;

/// @brief Method get_localizedDescription addr 0x2229c28 size 0x8 virtual true final true
 ::StringW get_localizedDescription() ;

/// @brief Method set_localizedDescription addr 0x2229c30 size 0x8 virtual false final false
 void set_localizedDescription(::StringW value) ;

/// @brief Method get_multiplayerSecret addr 0x2229c38 size 0x8 virtual true final true
 ::StringW get_multiplayerSecret() ;

/// @brief Method set_multiplayerSecret addr 0x2229c40 size 0x8 virtual true final true
 void set_multiplayerSecret(::StringW value) ;

/// @brief Method get_atMaxPartySize addr 0x2229c48 size 0x8 virtual true final true
 bool get_atMaxPartySize() ;

/// @brief Method set_atMaxPartySize addr 0x2229c50 size 0xc virtual true final true
 void set_atMaxPartySize(bool value) ;

/// @brief Method get_canInvite addr 0x2229c5c size 0x8 virtual true final true
 bool get_canInvite() ;

/// @brief Method set_canInvite addr 0x2229c64 size 0xc virtual true final true
 void set_canInvite(bool value) ;

/// @brief Method get_isJoinable addr 0x2229c70 size 0x38 virtual true final true
 bool get_isJoinable() ;

// Ctor Parameters [CppParam { name: "multiplayerSecret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "canInvite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "atMaxPartySize", ty: "bool", modifiers: "", def_value: None }]
explicit InMultiplayerRichPresenceData(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize) ;

/// @brief Method .ctor addr 0x2229ca8 size 0xa4 virtual false final false
 void _ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::InMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InMultiplayerRichPresenceData, "", "InMultiplayerRichPresenceData");
