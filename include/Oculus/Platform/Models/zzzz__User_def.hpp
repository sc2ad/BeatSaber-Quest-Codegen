#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform {
struct UserPresenceStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class User;
}
// Type: Oculus.Platform.Models::User
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13480))
// CS Name: Oculus.Platform.Models.User
class CORDL_TYPE User : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~User() = default;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: " const&", def_value: None }]
constexpr User(User const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None }]
constexpr User(User&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit User(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr User& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr User& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr User& operator=(User&& o) noexcept = default;
  constexpr User& operator=(User const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_DisplayName, put=__set_DisplayName))  DisplayName;

constexpr void __set_DisplayName(::StringW value) ;

constexpr ::StringW __get_DisplayName() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 ::StringW __declspec(property(get=__get_ImageURL, put=__set_ImageURL))  ImageURL;

constexpr void __set_ImageURL(::StringW value) ;

constexpr ::StringW __get_ImageURL() const;

 ::StringW __declspec(property(get=__get_InviteToken, put=__set_InviteToken))  InviteToken;

constexpr void __set_InviteToken(::StringW value) ;

constexpr ::StringW __get_InviteToken() const;

 ::StringW __declspec(property(get=__get_OculusID, put=__set_OculusID))  OculusID;

constexpr void __set_OculusID(::StringW value) ;

constexpr ::StringW __get_OculusID() const;

 ::StringW __declspec(property(get=__get_Presence, put=__set_Presence))  Presence;

constexpr void __set_Presence(::StringW value) ;

constexpr ::StringW __get_Presence() const;

 ::StringW __declspec(property(get=__get_PresenceDeeplinkMessage, put=__set_PresenceDeeplinkMessage))  PresenceDeeplinkMessage;

constexpr void __set_PresenceDeeplinkMessage(::StringW value) ;

constexpr ::StringW __get_PresenceDeeplinkMessage() const;

 ::StringW __declspec(property(get=__get_PresenceDestinationApiName, put=__set_PresenceDestinationApiName))  PresenceDestinationApiName;

constexpr void __set_PresenceDestinationApiName(::StringW value) ;

constexpr ::StringW __get_PresenceDestinationApiName() const;

 ::StringW __declspec(property(get=__get_PresenceLobbySessionId, put=__set_PresenceLobbySessionId))  PresenceLobbySessionId;

constexpr void __set_PresenceLobbySessionId(::StringW value) ;

constexpr ::StringW __get_PresenceLobbySessionId() const;

 ::StringW __declspec(property(get=__get_PresenceMatchSessionId, put=__set_PresenceMatchSessionId))  PresenceMatchSessionId;

constexpr void __set_PresenceMatchSessionId(::StringW value) ;

constexpr ::StringW __get_PresenceMatchSessionId() const;

 ::Oculus::Platform::UserPresenceStatus __declspec(property(get=__get_PresenceStatus, put=__set_PresenceStatus))  PresenceStatus;

constexpr void __set_PresenceStatus(::Oculus::Platform::UserPresenceStatus value) ;

constexpr ::Oculus::Platform::UserPresenceStatus __get_PresenceStatus() const;

 ::StringW __declspec(property(get=__get_SmallImageUrl, put=__set_SmallImageUrl))  SmallImageUrl;

constexpr void __set_SmallImageUrl(::StringW value) ;

constexpr ::StringW __get_SmallImageUrl() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit User(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c574 size 0x128 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::User);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::User, "Oculus.Platform.Models", "User");
