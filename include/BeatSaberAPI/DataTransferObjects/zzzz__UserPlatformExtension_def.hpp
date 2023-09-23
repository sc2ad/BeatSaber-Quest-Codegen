#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace BeatSaberAPI::DataTransferObjects {
struct UserPlatform;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserPlatformExtension;
}
// Type: BeatSaberAPI.DataTransferObjects::UserPlatformExtension
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6188))
// CS Name: BeatSaberAPI.DataTransferObjects.UserPlatformExtension
class CORDL_TYPE UserPlatformExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UserPlatformExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserPlatformExtension", modifiers: " const&", def_value: None }]
constexpr UserPlatformExtension(UserPlatformExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserPlatformExtension", modifiers: "&&", def_value: None }]
constexpr UserPlatformExtension(UserPlatformExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserPlatformExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserPlatformExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserPlatformExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserPlatformExtension& operator=(UserPlatformExtension&& o) noexcept = default;
  constexpr UserPlatformExtension& operator=(UserPlatformExtension const& o) noexcept = default;
                


// Fields

/// @brief Field kTest offset 0
static constexpr ::ConstString  kTest{u"Test"};

/// @brief Field kSteam offset 0
static constexpr ::ConstString  kSteam{u"Steam"};

/// @brief Field kPlayStation offset 0
static constexpr ::ConstString  kPlayStation{u"PlayStation"};

/// @brief Field kOculusPC offset 0
static constexpr ::ConstString  kOculusPC{u"OculusPC"};

/// @brief Field kOculusQuest offset 0
static constexpr ::ConstString  kOculusQuest{u"OculusQuest"};


// Methods

/// @brief Method GetUserPlatformFromSerializedName addr 0x21d7394 size 0x11c virtual false final false
static BeatSaberAPI::DataTransferObjects::UserPlatform GetUserPlatformFromSerializedName(::StringW name) ;

/// @brief Method GetUserPlatformSerializedName addr 0x21d74b0 size 0xa8 virtual false final false
static ::StringW GetUserPlatformSerializedName(BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::UserPlatformExtension);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserPlatformExtension, "BeatSaberAPI.DataTransferObjects", "UserPlatformExtension");
