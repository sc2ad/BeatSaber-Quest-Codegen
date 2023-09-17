#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class ErrorCodes;
}
// Type: BeatSaberAPI.DataTransferObjects::ErrorCodes
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6174))
// CS Name: BeatSaberAPI.DataTransferObjects.ErrorCodes
class CORDL_TYPE ErrorCodes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ErrorCodes() = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorCodes", modifiers: " const&", def_value: None }]
constexpr ErrorCodes(ErrorCodes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ErrorCodes", modifiers: "&&", def_value: None }]
constexpr ErrorCodes(ErrorCodes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ErrorCodes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ErrorCodes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ErrorCodes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ErrorCodes& operator=(ErrorCodes&& o) noexcept = default;
  constexpr ErrorCodes& operator=(ErrorCodes const& o) noexcept = default;
                


// Fields

/// @brief Field kUserVerificationError offset 0
static constexpr ::ConstString  kUserVerificationError{u"USER_VERIFICATION_ERROR"};

/// @brief Field kUserRegistrationError offset 0
static constexpr ::ConstString  kUserRegistrationError{u"USER_REGISTRATION_ERROR"};

/// @brief Field kCreateAccessTokenError offset 0
static constexpr ::ConstString  kCreateAccessTokenError{u"CREATE_ACCESS_TOKEN_ERROR"};

/// @brief Field kLeaderboardNotFound offset 0
static constexpr ::ConstString  kLeaderboardNotFound{u"LEADERBOARD_NOT_FOUND"};

/// @brief Field kWrongInput offset 0
static constexpr ::ConstString  kWrongInput{u"WRONG_INPUT"};

/// @brief Field kLoginError offset 0
static constexpr ::ConstString  kLoginError{u"LOGIN_ERROR"};

/// @brief Field kTokenError offset 0
static constexpr ::ConstString  kTokenError{u"TOKEN_ERROR"};

/// @brief Field kLoginTimeOut offset 0
static constexpr ::ConstString  kLoginTimeOut{u"LOGIN_TIME_OUT"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
} // end anonymous namespace
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::ErrorCodes);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ErrorCodes, "BeatSaberAPI.DataTransferObjects", "ErrorCodes");
