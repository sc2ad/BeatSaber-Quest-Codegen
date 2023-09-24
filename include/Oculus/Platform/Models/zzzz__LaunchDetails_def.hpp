#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
struct LaunchType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Type: Oculus.Platform.Models::LaunchDetails
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13422))
// CS Name: Oculus.Platform.Models.LaunchDetails
class CORDL_TYPE LaunchDetails : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LaunchDetails() = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: " const&", def_value: None }]
constexpr LaunchDetails(LaunchDetails const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "&&", def_value: None }]
constexpr LaunchDetails(LaunchDetails&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LaunchDetails(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LaunchDetails& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LaunchDetails& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LaunchDetails& operator=(LaunchDetails&& o) noexcept = default;
  constexpr LaunchDetails& operator=(LaunchDetails const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_DeeplinkMessage, put=__set_DeeplinkMessage))  DeeplinkMessage;

constexpr void __set_DeeplinkMessage(::StringW value) ;

constexpr ::StringW __get_DeeplinkMessage() const;

 ::StringW __declspec(property(get=__get_DestinationApiName, put=__set_DestinationApiName))  DestinationApiName;

constexpr void __set_DestinationApiName(::StringW value) ;

constexpr ::StringW __get_DestinationApiName() const;

 ::StringW __declspec(property(get=__get_LaunchSource, put=__set_LaunchSource))  LaunchSource;

constexpr void __set_LaunchSource(::StringW value) ;

constexpr ::StringW __get_LaunchSource() const;

 Oculus::Platform::LaunchType __declspec(property(get=__get_LaunchType, put=__set_LaunchType))  LaunchType;

constexpr void __set_LaunchType(Oculus::Platform::LaunchType value) ;

constexpr Oculus::Platform::LaunchType __get_LaunchType() const;

 uint64_t __declspec(property(get=__get_RoomID, put=__set_RoomID))  RoomID;

constexpr void __set_RoomID(uint64_t value) ;

constexpr uint64_t __get_RoomID() const;

 ::StringW __declspec(property(get=__get_TrackingID, put=__set_TrackingID))  TrackingID;

constexpr void __set_TrackingID(::StringW value) ;

constexpr ::StringW __get_TrackingID() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_UsersOptional, put=__set_UsersOptional))  UsersOptional;

constexpr void __set_UsersOptional(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_UsersOptional() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_Users, put=__set_Users))  Users;

constexpr void __set_Users(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_Users() const;


// Methods

static Oculus::Platform::Models::LaunchDetails New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f1f4 size 0x150 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LaunchDetails);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchDetails, "Oculus.Platform.Models", "LaunchDetails");
