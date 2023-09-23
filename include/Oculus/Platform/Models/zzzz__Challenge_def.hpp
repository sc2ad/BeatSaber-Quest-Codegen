#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform::Models {
class Leaderboard;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Challenge;
}
// Type: Oculus.Platform.Models::Challenge
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13401))
// CS Name: Oculus.Platform.Models.Challenge
class CORDL_TYPE Challenge : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Challenge() = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: " const&", def_value: None }]
constexpr Challenge(Challenge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None }]
constexpr Challenge(Challenge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Challenge(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Challenge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Challenge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Challenge& operator=(Challenge&& o) noexcept = default;
  constexpr Challenge& operator=(Challenge const& o) noexcept = default;
                


// Fields

 Oculus::Platform::ChallengeCreationType __declspec(property(get=__get_CreationType, put=__set_CreationType))  CreationType;

constexpr void __set_CreationType(Oculus::Platform::ChallengeCreationType value) ;

constexpr Oculus::Platform::ChallengeCreationType __get_CreationType() const;

 ::StringW __declspec(property(get=__get_Description, put=__set_Description))  Description;

constexpr void __set_Description(::StringW value) ;

constexpr ::StringW __get_Description() const;

 System::DateTime __declspec(property(get=__get_EndDate, put=__set_EndDate))  EndDate;

constexpr void __set_EndDate(System::DateTime value) ;

constexpr System::DateTime __get_EndDate() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsersOptional, put=__set_InvitedUsersOptional))  InvitedUsersOptional;

constexpr void __set_InvitedUsersOptional(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_InvitedUsersOptional() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_InvitedUsers, put=__set_InvitedUsers))  InvitedUsers;

constexpr void __set_InvitedUsers(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_InvitedUsers() const;

 Oculus::Platform::Models::Leaderboard __declspec(property(get=__get_Leaderboard, put=__set_Leaderboard))  Leaderboard;

constexpr void __set_Leaderboard(Oculus::Platform::Models::Leaderboard value) ;

constexpr Oculus::Platform::Models::Leaderboard __get_Leaderboard() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_ParticipantsOptional, put=__set_ParticipantsOptional))  ParticipantsOptional;

constexpr void __set_ParticipantsOptional(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_ParticipantsOptional() const;

 Oculus::Platform::Models::UserList __declspec(property(get=__get_Participants, put=__set_Participants))  Participants;

constexpr void __set_Participants(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_Participants() const;

 System::DateTime __declspec(property(get=__get_StartDate, put=__set_StartDate))  StartDate;

constexpr void __set_StartDate(System::DateTime value) ;

constexpr System::DateTime __get_StartDate() const;

 ::StringW __declspec(property(get=__get_Title, put=__set_Title))  Title;

constexpr void __set_Title(::StringW value) ;

constexpr ::StringW __get_Title() const;

 Oculus::Platform::ChallengeVisibility __declspec(property(get=__get_Visibility, put=__set_Visibility))  Visibility;

constexpr void __set_Visibility(Oculus::Platform::ChallengeVisibility value) ;

constexpr Oculus::Platform::ChallengeVisibility __get_Visibility() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Challenge(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d79c size 0x228 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Challenge);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Challenge, "Oculus.Platform.Models", "Challenge");
