#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserInfo;
}
// Type: BeatSaberAPI.DataTransferObjects::UserInfo
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6187))
// CS Name: BeatSaberAPI.DataTransferObjects.UserInfo
class CORDL_TYPE UserInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UserInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: " const&", def_value: None }]
constexpr UserInfo(UserInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "&&", def_value: None }]
constexpr UserInfo(UserInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserInfo& operator=(UserInfo&& o) noexcept = default;
  constexpr UserInfo& operator=(UserInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_platformUserId, put=__set_platformUserId))  platformUserId;

constexpr void __set_platformUserId(::StringW value) ;

constexpr ::StringW __get_platformUserId() const;

 ::StringW __declspec(property(get=__get_publicPlatformDisplayName, put=__set_publicPlatformDisplayName))  publicPlatformDisplayName;

constexpr void __set_publicPlatformDisplayName(::StringW value) ;

constexpr ::StringW __get_publicPlatformDisplayName() const;


// Methods

static BeatSaberAPI::DataTransferObjects::UserInfo New_ctor() ;

/// @brief Method .ctor addr 0x21d738c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::UserInfo);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserInfo, "BeatSaberAPI.DataTransferObjects", "UserInfo");
