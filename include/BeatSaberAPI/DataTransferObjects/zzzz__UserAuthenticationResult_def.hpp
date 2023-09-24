#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace BeatSaberAPI::DataTransferObjects {
class AccessToken;
}
namespace BeatSaberAPI::DataTransferObjects {
class UserInfo;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserAuthenticationResult;
}
// Type: BeatSaberAPI.DataTransferObjects::UserAuthenticationResult
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6185))
// CS Name: BeatSaberAPI.DataTransferObjects.UserAuthenticationResult
class CORDL_TYPE UserAuthenticationResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UserAuthenticationResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationResult", modifiers: " const&", def_value: None }]
constexpr UserAuthenticationResult(UserAuthenticationResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationResult", modifiers: "&&", def_value: None }]
constexpr UserAuthenticationResult(UserAuthenticationResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAuthenticationResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserAuthenticationResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAuthenticationResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAuthenticationResult& operator=(UserAuthenticationResult&& o) noexcept = default;
  constexpr UserAuthenticationResult& operator=(UserAuthenticationResult const& o) noexcept = default;
                


// Fields

 BeatSaberAPI::DataTransferObjects::UserInfo __declspec(property(get=__get_userInfo, put=__set_userInfo))  userInfo;

constexpr void __set_userInfo(BeatSaberAPI::DataTransferObjects::UserInfo value) ;

constexpr BeatSaberAPI::DataTransferObjects::UserInfo __get_userInfo() const;

 BeatSaberAPI::DataTransferObjects::AccessToken __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(BeatSaberAPI::DataTransferObjects::AccessToken value) ;

constexpr BeatSaberAPI::DataTransferObjects::AccessToken __get_accessToken() const;


// Methods

static BeatSaberAPI::DataTransferObjects::UserAuthenticationResult New_ctor() ;

/// @brief Method .ctor addr 0x21d737c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::UserAuthenticationResult);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserAuthenticationResult, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationResult");
