#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace BeatSaberAPI::DataTransferObjects {
struct UserPlatform;
}
namespace BeatSaberAPI::DataTransferObjects {
struct PlatformEnviroment;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserAuthenticationData;
}
// Type: BeatSaberAPI.DataTransferObjects::UserAuthenticationData
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6184))
// CS Name: BeatSaberAPI.DataTransferObjects.UserAuthenticationData
class CORDL_TYPE UserAuthenticationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UserAuthenticationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationData", modifiers: " const&", def_value: None }]
constexpr UserAuthenticationData(UserAuthenticationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationData", modifiers: "&&", def_value: None }]
constexpr UserAuthenticationData(UserAuthenticationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAuthenticationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserAuthenticationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAuthenticationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAuthenticationData& operator=(UserAuthenticationData&& o) noexcept = default;
  constexpr UserAuthenticationData& operator=(UserAuthenticationData const& o) noexcept = default;
                


// Fields

 BeatSaberAPI::DataTransferObjects::UserPlatform __declspec(property(get=__get_userPlatform, put=__set_userPlatform))  userPlatform;

constexpr void __set_userPlatform(BeatSaberAPI::DataTransferObjects::UserPlatform value) ;

constexpr BeatSaberAPI::DataTransferObjects::UserPlatform __get_userPlatform() const;

 BeatSaberAPI::DataTransferObjects::PlatformEnviroment __declspec(property(get=__get_platformEnviroment, put=__set_platformEnviroment))  platformEnviroment;

constexpr void __set_platformEnviroment(BeatSaberAPI::DataTransferObjects::PlatformEnviroment value) ;

constexpr BeatSaberAPI::DataTransferObjects::PlatformEnviroment __get_platformEnviroment() const;

 ::StringW __declspec(property(get=__get_platformUserId, put=__set_platformUserId))  platformUserId;

constexpr void __set_platformUserId(::StringW value) ;

constexpr ::StringW __get_platformUserId() const;

 ::StringW __declspec(property(get=__get_platformAuthToken, put=__set_platformAuthToken))  platformAuthToken;

constexpr void __set_platformAuthToken(::StringW value) ;

constexpr ::StringW __get_platformAuthToken() const;

 ::StringW __declspec(property(get=__get_bsAuthToken, put=__set_bsAuthToken))  bsAuthToken;

constexpr void __set_bsAuthToken(::StringW value) ;

constexpr ::StringW __get_bsAuthToken() const;

 ::StringW __declspec(property(get=__get_gameBuildVersion, put=__set_gameBuildVersion))  gameBuildVersion;

constexpr void __set_gameBuildVersion(::StringW value) ;

constexpr ::StringW __get_gameBuildVersion() const;

 ::StringW __declspec(property(get=__get_publicUserDisplayName, put=__set_publicUserDisplayName))  publicUserDisplayName;

constexpr void __set_publicUserDisplayName(::StringW value) ;

constexpr ::StringW __get_publicUserDisplayName() const;


// Methods

static BeatSaberAPI::DataTransferObjects::UserAuthenticationData New_ctor() ;

/// @brief Method .ctor addr 0x21d7374 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::UserAuthenticationData);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserAuthenticationData, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationData");
