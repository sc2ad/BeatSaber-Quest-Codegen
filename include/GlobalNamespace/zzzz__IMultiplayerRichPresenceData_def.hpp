#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerRichPresenceData;
}
// Type: ::IMultiplayerRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4784))
// CS Name: IMultiplayerRichPresenceData
class CORDL_TYPE IMultiplayerRichPresenceData : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IRichPresenceData
constexpr operator  ::GlobalNamespace::IRichPresenceData() const noexcept;

~IMultiplayerRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerRichPresenceData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_multiplayerSecret, put=set_multiplayerSecret))  multiplayerSecret;

 bool __declspec(property(get=get_atMaxPartySize, put=set_atMaxPartySize))  atMaxPartySize;

 bool __declspec(property(get=get_canInvite, put=set_canInvite))  canInvite;

 bool __declspec(property(get=get_isJoinable))  isJoinable;


// Methods

/// @brief Method get_multiplayerSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_multiplayerSecret() ;

/// @brief Method set_multiplayerSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_multiplayerSecret(::StringW value) ;

/// @brief Method get_atMaxPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_atMaxPartySize() ;

/// @brief Method set_atMaxPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_atMaxPartySize(bool value) ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canInvite() ;

/// @brief Method set_canInvite addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_canInvite(bool value) ;

/// @brief Method get_isJoinable addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isJoinable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerRichPresenceData, "", "IMultiplayerRichPresenceData");
